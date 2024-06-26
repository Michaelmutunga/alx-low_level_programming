#include <stdio.h>

int main() {
	    int first = 1, second = 2, next;
	        long long sum = 2;  // Starting with 2 since second is already even and added to sum

		    while (1) {
			            next = first + second;
				            if (next > 4000000)
						                break;
					            
					            if (next % 2 == 0)
							                sum += next;
						            
						            first = second;
							            second = next;
								        }

		        printf("%lld\n", sum);
			    return 0;
}

