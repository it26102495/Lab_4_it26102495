#include <stdio.h>
int main(void)
{
	int fingerprint_match , retinal_match , access_card_valid ;
        printf("Enter the 1 if person's fingerprint matches the stored fingerprint ifnot Enter 0:\n");
        scanf("%d", &fingerprint_match);
        printf("Enter the 1 if retinal scan matches the stored retinal data ifnot Enter 0:\n");
        scanf("%d", &retinal_match);
        printf("Enter the 1 if access card is valid ifnot Enter 0:\n");
        scanf("%d", &access_card_valid);
        if (fingerprint_match == 1 && retinal_match == 1 || fingerprint_match == 1 && access_card_valid == 1 || retinal_match == 1 && access_card_valid == 1){
                printf("Access granted\n");
	}
        else { 
		printf("Access denied\n");
	}
      
}

