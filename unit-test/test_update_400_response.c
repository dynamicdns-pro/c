#ifndef update_400_response_TEST
#define update_400_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_400_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_400_response.h"
update_400_response_t* instantiate_update_400_response(int include_optional);



update_400_response_t* instantiate_update_400_response(int include_optional) {
  update_400_response_t* update_400_response = NULL;
  if (include_optional) {
    update_400_response = update_400_response_create(
      "No ip address provided"
    );
  } else {
    update_400_response = update_400_response_create(
      "No ip address provided"
    );
  }

  return update_400_response;
}


#ifdef update_400_response_MAIN

void test_update_400_response(int include_optional) {
    update_400_response_t* update_400_response_1 = instantiate_update_400_response(include_optional);

	cJSON* jsonupdate_400_response_1 = update_400_response_convertToJSON(update_400_response_1);
	printf("update_400_response :\n%s\n", cJSON_Print(jsonupdate_400_response_1));
	update_400_response_t* update_400_response_2 = update_400_response_parseFromJSON(jsonupdate_400_response_1);
	cJSON* jsonupdate_400_response_2 = update_400_response_convertToJSON(update_400_response_2);
	printf("repeating update_400_response:\n%s\n", cJSON_Print(jsonupdate_400_response_2));
}

int main() {
  test_update_400_response(1);
  test_update_400_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_400_response_MAIN
#endif // update_400_response_TEST
