/*************************************************************************
        Copyright © 2021 Konstantinidis Konstantinos

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*************************************************************************/
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int cube(int i);
int sum_cube(int number);
bool isArmstrong(int a);

main(){
    printf("Armstrong numbers between 1-999: \n");
    for(int i=1; i<=999; i++)
        if (isArmstrong(i))
            printf("Armstrong number: %d\n", i);

    system("PAUSE");
}

bool isArmstrong(int a){
    return (sum_cube(a) == a);
}

int sum_cube(int number){
    int right, middle, left;

    right = number % 10;
    middle = number / 10;
    middle = middle % 10;
    left = number / 10;
    left = left / 10;

    return cube(right) + cube(middle) + cube(left);
}

int cube(int i){
    return i*i*i;
}
