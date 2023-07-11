//! [all]
// #include "google/cloud/secretmanager/v1/secret_manager_client.h"
#include <iostream>

char* get_secret(const char* secret_name, int secret_version) {

  std::cout << "=== get_secret ===" << "\n";
  std::cout << "secret_name: " << secret_name << "\n";
  std::cout << "secret_version: " << secret_version << "\n";

  return NULL;
}

int main(int argc, char* argv[]) {

  std::cout << "=== main ===" << "\n";

  const char* secret_name = "projects/281699279307/secrets/secretmanager_quickstart";

  char* secret = get_secret(secret_name, 1);

  std::cout << "Secret: " << secret << "\n";

  return 0;
}


  // int _main(int argc, char* argv[]) {
  //   try {
  //     if (argc != 3) {
  //       std::cerr << "Usage: " << argv[0] << " project-id secret-name\n";
  //       return 1;
  //     }

  //     namespace secretmanager = ::google::cloud::secretmanager_v1;
  //     auto client = secretmanager::SecretManagerServiceClient(
  //         secretmanager::MakeSecretManagerServiceConnection());

  //     auto const parent = std::string("projects/") + argv[1];
  //     for (auto secret : client.ListSecrets(parent)) {
  //       if (!secret) throw std::move(secret).status();
  //       std::cout << secret->DebugString() << "\n";
  //     }

  //     //auto const secretId = parent + std::string("secrets/") + argv[2];
  //     auto const secretId = "projects/281699279307/secrets/secretmanager_quickstart";

  //     auto secret = client.GetSecret(secretId);
  //     if(!secret) {
  //       std::cout << "# No secret found" << "\n";
  //     } else {

  //       std::cout << "# Yay! Secret found" << "\n";
  //       const auto secretName = secret.value().name();
  //       std::cout << "# SECRET NAME:'" << secretName  << "'\n";

  //       auto const secretIdVersion = "projects/281699279307/secrets/secretmanager_quickstart/versions/1";


  //       google::cloud::v2_11::StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse> secretPayload = client.AccessSecretVersion(secretIdVersion);

  //       if(!secretPayload) {
  //         std::cout << "# No payload :'-( " << "\n"; 
  //       } else {
  //         std::cout << "# Payload :-D" << "\n";
  //         std::cout << secretPayload.value().DebugString() << "\n";
  //         std::cout << "Data: " << secretPayload.value().payload().data() << "\n";

  //       }

  //       //std::cout << "Secret payload value name: " << secretPayload.value() << "\n"; 

  //       // std::cout << "Secret payload data: " << secretPayload.value() << "\n"; 



  //     }


  //     //std::cout << secret << "\n";


  //     return 0;
  //   } catch (google::cloud::Status const& status) {
  //     std::cerr << "google::cloud::Status thrown: " << status << "\n";
  //     return 1;
  //   }
  // }
  //! [all]
