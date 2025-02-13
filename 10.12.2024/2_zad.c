#include <stdio.h>

int main(void) {
    unsigned char lights = 0;
    while(1) {
        printf("\nEnter 0 to switch a light on/off or 1 to print the state of the lights (2 to exit): \n");
        int ans;
        scanf("%d", &ans);
        switch(ans) {
            case 0:
                printf("Enter the number of the light you want to turn on/off (1 - 8): \n");
                int num;
                scanf("%d", &num);
                if (num >= 1 && num <= 8) {
                    lights ^= (1 << (num - 1));
                    printf("Light %d has been switched. \n", num);
                } else {
                    printf("Error: the entered number isn't a valid option. \n");
                }
                break;
            case 1:
                printf("The lights are on in rooms: ");
                int check = 0;
                for (int i = 0; i < 8; i++) {
                    if ((lights >> i) & 1) {
                        printf("%d ", i + 1);
                        check = 1;
                    }
                }
                if (!check) {
                    printf("(none of the lights are on)");
                }
                printf("\n");
                break;
            case 2:
                return 0;
            default:
                printf("Error: the entered number isn't a valid option. \n");
        }
    }
}