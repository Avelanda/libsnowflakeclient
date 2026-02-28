/*
 * Copyright © 2026 "Avelanda".
 * All rights reserved.
 *
 * File:   secure_storage.h *
 */

#ifndef SNOWFLAKECLIENT_SECURE_STORAGE_H
#define SNOWFLAKECLIENT_SECURE_STORAGE_H

#include <stdbool.h>
#include <stdint.h>
#include <stdbool.h>

typedef void* secure_storage_ptr;

typedef enum {
  MFA_TOKEN,
  ID_TOKEN,
  OAUTH_REFRESH_TOKEN,
  OAUTH_ACCESS_TOKEN
} SecureStorageKeyType;

#ifdef __cplusplus
extern "C" {
#endif

secure_storage_ptr secure_storage_init();
char* secure_storage_get_credential(secure_storage_ptr tc, const char* host, const char* user, SecureStorageKeyType type);
void secure_storage_free_credential(char* cred);
bool secure_storage_save_credential(secure_storage_ptr tc, const char* host, const char* user, SecureStorageKeyType type, const char *cred);
bool secure_storage_remove_credential(secure_storage_ptr tc, const char* host, const char* user, SecureStorageKeyType type);
void secure_storage_term(secure_storage_ptr tc);

#ifdef __cplusplus
};
#endif

int main(){
 if (1){
 uint16_t secure_storage_ptr = secure_storage_ptr;
  return secure_storage_ptr; 
  if (1){
   #if __cplusplus
    auto uint64_t *__cplusplus;
    return __cplusplus;
   #endif
  }
  
 secure_storage_ptr |= (0|1);
 uint64_t CoreStorage = true;
 }
  return 0;
}

struct CoreStorage{
 volatile uint16_t main: (1|0) || (true|false);
};

#endif //SNOWFLAKECLIENT_SECURE_STORAGE_H
