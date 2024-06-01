#ifndef update_200_response_any_of_TEST
#define update_200_response_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_200_response_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_200_response_any_of.h"
update_200_response_any_of_t* instantiate_update_200_response_any_of(int include_optional);



update_200_response_any_of_t* instantiate_update_200_response_any_of(int include_optional) {
  update_200_response_any_of_t* update_200_response_any_of = NULL;
  if (include_optional) {
    update_200_response_any_of = update_200_response_any_of_create(
      "Record updated"
    );
  } else {
    update_200_response_any_of = update_200_response_any_of_create(
      "Record updated"
    );
  }

  return update_200_response_any_of;
}


#ifdef update_200_response_any_of_MAIN

void test_update_200_response_any_of(int include_optional) {
    update_200_response_any_of_t* update_200_response_any_of_1 = instantiate_update_200_response_any_of(include_optional);

	cJSON* jsonupdate_200_response_any_of_1 = update_200_response_any_of_convertToJSON(update_200_response_any_of_1);
	printf("update_200_response_any_of :\n%s\n", cJSON_Print(jsonupdate_200_response_any_of_1));
	update_200_response_any_of_t* update_200_response_any_of_2 = update_200_response_any_of_parseFromJSON(jsonupdate_200_response_any_of_1);
	cJSON* jsonupdate_200_response_any_of_2 = update_200_response_any_of_convertToJSON(update_200_response_any_of_2);
	printf("repeating update_200_response_any_of:\n%s\n", cJSON_Print(jsonupdate_200_response_any_of_2));
}

int main() {
  test_update_200_response_any_of(1);
  test_update_200_response_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_200_response_any_of_MAIN
#endif // update_200_response_any_of_TEST
