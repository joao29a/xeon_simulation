#include "ptlsim/tools/ptlcalls.h"
#include <stdio.h>

int main(){
	printf("Stoping simulation\n");
	ptlcall_switch_to_native();
	return 0;
}
