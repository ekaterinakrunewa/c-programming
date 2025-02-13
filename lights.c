#include <stdio.h> 
int lightstate;

void switchlight(const int light) { 
    lightstate ^= (1 << (light - 1)); 
    } 

void menuprint() { 
    printf("1. Switch light\n"); 
    printf("2. Print state\n"); 
    printf("3. Exit\n"); 
    } 
    
int main() { 
    int choice;
    int light; 
    while (1) { 
        menuprint();
        scanf("%d", &choice);
        switch (choice) { 
            case 1:
                printf("Enter light to switch: "); 
                scanf("%d", &light); 
                switchlight(light); 
                break;

            case 2:
                printf("Light is on in rooms:"); 
                for (int i = 0; i < 8; i++){ 
                    if (lightstate & (1 << i)) 
                        printf(" %d", i + 1);
                }
                printf("\n"); 
                break; 

            case 3:
                return 0;

            default: 
                printf("Invalid choice\n"); 
        } 
    }
             
return 0; 
}