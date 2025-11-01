// #include<stdio.h>
// void main(){
// 	struct s1{
// 		char name[20];
// 		int rno;
// 		char grade;
// 	};
// 	int num;
// 	printf("Enter the Number of Students here: ");
// 	scanf("%d",&num);
// 	struct s1 a[num];
// 	printf("Start Entering the Name, R.No., Grade serially: \n");
// 	for(int i=0;i<=num;i++){
// //		scanf("%s",a[i].name);
// 		fgets(a[i].name, 20, stdin);
// 		scanf();
// 		scanf("%d",&a[i].rno);
// 		scanf(" %c",&a[i].grade);
// 	}
	
// 	printf("Printing the Values Orderwise: \n");
// 	for(int i=0;i<=num;i++){
// 		puts(a[i].name);		
// 		printf("%d",a[i].rno);
// 		printf("%c",a[i].grade);
// 	}
// }



#include<stdio.h>

int main() { // Standard practice is 'int main()'
    struct s1{
        char name[20];
        int rno;
        char grade;
    };
    
    int num;
    printf("Enter the Number of Students here: ");
    scanf("%d",&num);

    // FIX 2: Clear the input buffer after scanf and before the first fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { } 

    // Note: Variable Length Arrays (VLA) like 'a[num]' are a C99 feature and not C++ standard.
    // If compiling as C++, you'd need to use 'new' or 'malloc'.
    struct s1 a[num];

    printf("Start Entering the Name, R.No., Grade serially: \n");
    for(int i=0; i < num; i++){ // FIX 1: Change <= num to < num
        printf("Enter Name for student %d: ", i + 1);
        fgets(a[i].name, 20, stdin);
        
        printf("Enter R.No. for student %d: ", i + 1);
        scanf("%d",&a[i].rno);
        
        printf("Enter Grade for student %d: ", i + 1);
        // Add a space before %c to consume trailing whitespace/newline from previous scanf
        scanf(" %c",&a[i].grade); 
        
        // Clear buffer again to handle newline after the last scanf for the next loop iteration
        while ((c = getchar()) != '\n' && c != EOF) { } 
    }
    
    printf("\nPrinting the Values Orderwise: \n");
    for(int i=0; i < num; i++){ // FIX 1: Change <= num to < num
        printf("Student %d: %s", i + 1,a[i].name);
        printf("R.No.: %d\n", a[i].rno);
        printf("Grade: %c\n", a[i].grade);
    }
    
    return 0; // Return 0 for successful execution
}
