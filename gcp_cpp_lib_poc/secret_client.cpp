//! [all]
#include "google/cloud/secretmanager/v1/secret_manager_client.h"
#include <iostream>

int main(int argc, char* argv[]) {
  try {
    if (argc != 3) {
      std::cerr << "Usage: " << argv[0] << " project-id secret-name\n";
      return 1;
    }

    namespace secretmanager = ::google::cloud::secretmanager_v1;
    auto client = secretmanager::SecretManagerServiceClient(
        secretmanager::MakeSecretManagerServiceConnection());

    auto const parent = std::string("projects/") + argv[1];
  }
}
//! [all]
