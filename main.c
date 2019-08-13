#include <stdio.h>
#include <stdlib.h>

#define USAGE \
"Bezier curves printer\n\n\
Usage: %s <image_width> <image_height> <pixels_per_point> \
<input_file_name> <output_file_name>"

int main(int argc, char **argv) {
	
	if(argc == 1) {
		
		printf(USAGE, argv[0]);
		exit(0);
	}
	
	return 0;
}
