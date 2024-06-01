#ifndef update_403_response_TEST
#define update_403_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_403_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_403_response.h"
update_403_response_t* instantiate_update_403_response(int include_optional);



update_403_response_t* instantiate_update_403_response(int include_optional) {
  update_403_response_t* update_403_response = NULL;
  if (include_optional) {
    update_403_response = update_403_response_create(
      "You are not allowed to update this record"
    );
  } else {
    update_403_response = update_403_response_create(
      "You are not allowed to update this record"
    );
  }

  return update_403_response;
}


#ifdef update_403_response_MAIN

void test_update_403_response(int include_optional) {
    update_403_response_t* update_403_response_1 = instantiate_update_403_response(include_optional);

	cJSON* jsonupdate_403_response_1 = update_403_response_convertToJSON(update_403_response_1);
	printf("update_403_response :\n%s\n", cJSON_Print(jsonupdate_403_response_1));
	update_403_response_t* update_403_response_2 = update_403_response_parseFromJSON(jsonupdate_403_response_1);
	cJSON* jsonupdate_403_response_2 = update_403_response_convertToJSON(update_403_response_2);
	printf("repeating update_403_response:\n%s\n", cJSON_Print(jsonupdate_403_response_2));
}

int main() {
  test_update_403_response(1);
  test_update_403_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_403_response_MAIN
#endif // update_403_response_TEST
