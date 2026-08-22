    #include<stdio.h>
    #include<string.h>

        
            
        int main () {

            typedef struct cricketer {
            char name [40];
            int age ;
            int noOfmatches ;
            float average;
            }cricketer;
            
            cricketer arr[20];

            for (int i = 0; i<3; i++){
                
                printf("enter details of cricketer %d :\n", i+1);
                // scanf(" %[^\n]", arr[i].name);
                scanf(" %s", arr[i].name);//for first name...
                // gets(arr[i].name); //gets() blindly reads input until newline without size checking and 
                // immediately returns an empty string if a newline already exists in the buffer.
                scanf("%d", &arr[i].age);
                scanf("%d", &arr[i].noOfmatches);
                scanf("%f", &arr[i].average);
            }

            for(int i = 0; i<3; i++){
                printf("\nName :%s\n", arr[i].name);
                printf("age :%d\n", arr[i].age);
                printf("noOfmatches :%d\n", arr[i].noOfmatches);
                printf("avg :%f\n", arr[i].average);
            }



            return 0;
        }