#include <stdio.h>
#include <string.h>
int main(){
    char strongstr[] = "East or west, chicken is the best";
    char weakstr[] = "mutton is bad";
    long  lens = strlen(strongstr);
    printf("Length: %ld\n",lens);

    strcat(strongstr,weakstr);
    printf("cat string = %s\n",strongstr);

    strcpy(weakstr,strongstr);
    printf("copied str = %s\n",weakstr);

    strrev(strongstr);
    printf("revved str = %s\n",strongstr);

    strupr(strongstr);
    printf("upper string = %s\n",strongstr);

    strlwr(strongstr);
    printf("lower string = %s\n",strongstr);

    int res = strcmp(strongstr,weakstr);
    printf("comparision: %d",res);

}
