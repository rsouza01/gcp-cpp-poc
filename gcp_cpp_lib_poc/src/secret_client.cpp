#include "lib/secret_manager/secret_manager_lib.h"
#include <iostream>


int main(int argc, char* argv[]) {

  std::cout << "=== main ===" << "\n";

  const char* secret_name = "projects/281699279307/secrets/secretmanager_quickstart";

  char* secret = get_secret(secret_name, 1);

  std::cout << "Secret: " << secret << std::endl;

  return 0;
}
