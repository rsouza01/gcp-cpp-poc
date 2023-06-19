#include "google/cloud/secretmanager/v1/secret_manager_client.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " project-id\n";
    return 1;
  }

  namespace secretmanager = ::google::cloud::secretmanager_v1;
  auto client = secretmanager::SecretManagerServiceClient(
      secretmanager::MakeSecretManagerServiceConnection());

  auto const parent = std::string("projects/") + argv[1];
  for (auto secret : client.ListSecrets(parent)) {
    if (!secret) throw std::move(secret).status();
    std::cout << secret->DebugString() << "\n";
  }

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}