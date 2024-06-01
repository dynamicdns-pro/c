#ifndef update_request_TEST
#define update_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_request.h"
update_request_t* instantiate_update_request(int include_optional);



update_request_t* instantiate_update_request(int include_optional) {
  update_request_t* update_request = NULL;
  if (include_optional) {
    update_request = update_request_create(
      dynamicdns_pro_update_request_TYPE_A
    );
  } else {
    update_request = update_request_create(
      dynamicdns_pro_update_request_TYPE_A
    );
  }

  return update_request;
}


#ifdef update_request_MAIN

void test_update_request(int include_optional) {
    update_request_t* update_request_1 = instantiate_update_request(include_optional);

	cJSON* jsonupdate_request_1 = update_request_convertToJSON(update_request_1);
	printf("update_request :\n%s\n", cJSON_Print(jsonupdate_request_1));
	update_request_t* update_request_2 = update_request_parseFromJSON(jsonupdate_request_1);
	cJSON* jsonupdate_request_2 = update_request_convertToJSON(update_request_2);
	printf("repeating update_request:\n%s\n", cJSON_Print(jsonupdate_request_2));
}

int main() {
  test_update_request(1);
  test_update_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_request_MAIN
#endif // update_request_TEST
