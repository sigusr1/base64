#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "base64.h"

int
main(void)
{
	unsigned char input[] = "pleasure.";
	int len;
	unsigned char decode[200];
	char output[200];
	bzero(output, sizeof(output));
	bzero(decode, sizeof(decode));
	len = Base64encode(output, input, strlen(input));
	printf("Encode :%d %d %s\n", len, Base64encode_len(strlen(input)), output);
	len = Base64decode(decode, output);
	printf("Decode :%d %d %s\n", len, Base64decode_len(output), decode);

	return 0;
}
