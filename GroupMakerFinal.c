#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#define DATABASE_SIZE 100

struct Person{
    int ID;
    char *name;
    int marks;
};

struct Person database[DATABASE_SIZE];//Database
int COUNT_FOR_PERSON;//Number of entries in the database
char password[] = "fourteen";//password

//Function declarations
int checkPsswd(char password[]);
void randomGroupGenerator(int np, int ng);
void iiitvRandom();
void shuffle(int arr[], int n);
void swap(int *a, int *b);
void addPerson();
int getID(int count);
char* getName(int count);
int getMarks(int count);
struct Person findByID(int ID);
struct Person findByMarks(int marks);
void arraySort(int arr[], int n);
void arraySort2(struct Person list[COUNT_FOR_PERSON], int n);
void printIiitvData();
void nameBased();
void ID_Based();
void markBased();


//DRIVER CODE
int main() { 
	COUNT_FOR_PERSON = 0;
	int fchoice;
	int choice;
	int choice2;
	printf("------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t#GROUP MAKER#\n");
	printf("------------------------------------------------------------------------------------------------\n");

	printf("Press 1 to make groups of IIITV-ICD Students\n");//tarun mali
	printf("Press 2 to make groups of new Students whose data you have to input\n");//alex tamboli
	printf("Enter your choice:");
	scanf("%d",&fchoice);
	if(fchoice==1){
		printf("------------------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t#IIITV DIU CAMPUS WELCOMES YOU#\n");
		printf("------------------------------------------------------------------------------------------------\n");

		int res = checkPsswd(password);
		if(res == 1){
			//database of IIITV students IDs
			database[0].ID=202011001, database[1].ID=202011002, database[2].ID=202011003, database[3].ID=202011004, database[4].ID=202011005, database[5].ID=202011006, database[6].ID=202011007, database[7].ID=202011008, database[8].ID=202011009, database[9].ID=202011010, database[10].ID=202011012, database[11].ID=202011013, database[12].ID=202011014, database[13].ID=202011015, database[14].ID=202011016, database[15].ID=202011017, database[16].ID=202011018, database[17].ID=202011019, database[18].ID=202011020, database[19].ID=202011021, database[20].ID=202011022, database[21].ID=202011023, database[22].ID=202011024, database[23].ID=202011026, database[24].ID=202011027, database[25].ID=202011028, database[26].ID=202011029, database[27].ID=202011030, database[28].ID=202011031, database[29].ID=202011032, database[30].ID=202011033,database[31].ID=202011034, database[32].ID=202011035, database[33].ID=202011036, database[34].ID=202011037, database[35].ID=202011038, database[36].ID=202011039, database[37].ID=202011040, database[38].ID=202011041, database[39].ID=202011042, database[40].ID=202011043, database[41].ID=202011044, database[42].ID=202011045, database[43].ID=202011046, database[44].ID=202011047, database[45].ID=202011048, database[46].ID=202011050, database[47].ID=202011051, database[48].ID=202011052, database[49].ID=202011053, database[50].ID=202011054, database[51].ID=202011055, database[52].ID=202011056, database[53].ID=202011057, database[54].ID=202011058, database[55].ID=202011059, database[56].ID=202011060, database[57].ID=202011061, database[58].ID=202011062, database[59].ID=202011063, database[60].ID=202011064, database[61].ID=202011065, database[62].ID=202011066, database[63].ID=202011067, database[64].ID=202011068, database[65].ID=202011069, database[66].ID=202011070, database[67].ID=202011071, database[68].ID=202011072, database[69].ID=202011073, database[70].ID=202011074, database[71].ID=202011075, database[72].ID=202011076, database[73].ID=202011077, database[74].ID=202011078, database[75].ID=202011079, database[76].ID=202011080;
			database[0].marks=18, database[1].marks=17, database[2].marks=19, database[3].marks=17, database[4].marks=5, database[5].marks=16, database[6].marks=18, database[7].marks=19, database[8].marks=11, database[9].marks=19, database[10].marks=16, database[11].marks=19, database[12].marks=5, database[13].marks=14, database[14].marks=18, database[15].marks=20, database[16].marks=19, database[17].marks=15, database[18].marks=19, database[19].marks=18, database[20].marks=18, database[21].marks=16, database[22].marks=19, database[23].marks=18, database[24].marks=18.5, database[25].marks=15, database[26].marks=18, database[27].marks=0, database[28].marks=17, database[29].marks=20, database[30].marks=19, database[31].marks=14, database[32].marks=17, database[33].marks=9, database[34].marks=16, database[35].marks=18, database[36].marks=12, database[37].marks=9, database[38].marks=11, database[39].marks=15, database[40].marks=19, database[41].marks=18, database[42].marks=17, database[43].marks=10, database[44].marks=16, database[45].marks=16, database[46].marks=20, database[47].marks=19, database[48].marks=18, database[49].marks=19, database[50].marks=16, database[51].marks=19, database[52].marks=0, database[53].marks=18, database[54].marks=14, database[55].marks=18, database[56].marks=20, database[57].marks=20, database[58].marks=12, database[59].marks=15, database[60].marks=12, database[61].marks=15, database[62].marks=15, database[63].marks=17, database[64].marks=19, database[65].marks=18, database[66].marks=18, database[67].marks=19, database[68].marks=0, database[69].marks=14, database[70].marks=18, database[71].marks=16, database[72].marks=19, database[73].marks=17, database[74].marks=12, database[75].marks=19, database[76].marks=20;
			database[0].name="Abhishek Dhangar", database[1].name="Abhishek Tharu", database[2].name="Aditya Adityaa", database[3].name="Aditya Shakle", database[4].name="Agraj Jidung", database[5].name="Akash Mishra", database[6].name="Al Kahaf Ahmad", database[7].name="Amarjeet Kumar", database[8].name="Anish Bairwa", database[9].name="Anmol Jain", database[10].name="Ishaan Ashish Arora", database[11].name="Ashish Gupta", database[12].name="Ashutosh Ankush Dhumal", database[13].name="Avichal Bansal", database[14].name="Bhalodia Chinmay", database[15].name="Bhavsar Yashesh", database[16].name="Vivek Manoj Borole", database[17].name="Deep Chaudhary", database[18].name="Dev Juneja", database[19].name="Divanshu Prajapat", database[20].name="Gurupal Singh", database[21].name="Karan Hadiyal", database[22].name="Hari Gopal Nayak Jarupla", database[23].name="Hrishubh Bhandari", database[24].name="Inderjeet Singh", database[25].name="Ishant Bisen", database[26].name="Jaideep Panchal", database[27].name="Jayesh Jaroli", database[28].name="Jaykumar Kumar", database[29].name="Jenishkumar Desai", database[30].name="Jigyashu", database[31].name="K Goutham Goutham", database[32].name="Kadali Sri Akash", database[33].name="Kampati Tharun", database[34].name="Kanakam Venkata Vishnu Swaroop", database[35].name="Karan Chaudhary", database[36].name="Katyare Prashik Ramchandra", database[37].name="Kaushik Moralwar", database[38].name="Krishna Jaishwal", database[39].name="Ajay Rakeshkumar Kumbhar", database[40].name="Lakshya Lakshyaa", database[41].name="Likhithapudi Pranadeep", database[42].name="Mahesh Maheshh", database[43].name="Muppala Nithish Kumar Raju", database[44].name="N Vinod Kumar Reddy", database[45].name="Naman Kumar Jangid", database[46].name="Nishesh Jain", database[47].name="Omkaar Bhamare", database[48].name="Pallikonda Sai Teja", database[49].name="Krunal Rajendrabhai Patel", database[50].name="Patel Sanskar Sanjaykumar", database[51].name="Mahesh Mangukiya Perin", database[52].name="Podiyam Mahesh", database[53].name="Prafulla Patil", database[54].name="Prashant Kumar", database[55].name="Priyanka Joshi", database[56].name="Raj Tejaswee", database[57].name="Rajat Singh", database[58].name="Ramancha Kartheesha", database[59].name="Ravish Kumar Singh", database[60].name="Rohit Khandal", database[61].name="Sakshi Singh Dangi", database[62].name="Suhubham Senani", database[63].name="Siddharth Gautham", database[64].name="Sourya Roy Karmakar", database[65].name="Suraj Kumar", database[66].name="Suyash Rapjut", database[67].name="Tamboli Alex Hitendrabhai", database[68].name="Tanmay T", database[69].name="Tarun Mali", database[70].name="Tushar Agrawal", database[71].name="Tushar Vyas", database[72].name="Urmil Sachin Lokhande", database[73].name="Vartul Shrivastava", database[74].name="Yash Chandil Gupta", database[75].name="Yashasvi Sharma", database[76].name="Aditya A";
			COUNT_FOR_PERSON = 77;

			jump:
			printf("\nPress 1 to view list of students with Name, ID and Marks in Midsem\n");
			printf("Press 2 to Categorize students into group\n");
			printf("Enter your choice:");
			int schoice;
			scanf("%d",&schoice);
			if(schoice==1){
				printIiitvData();
				printf("Press Enter to continue");
				getch();
				goto jump;	
			}
			else if(schoice==2){
				char toRecur = 'Y';
				do{
					printf("--------------------------------------------------------------\n");
					printf("\t\t#Categorizing to Groups#\n");
					printf("\n  1. Random\n");
					printf("  2. ID Based\n");
					printf("  3. Name Based\n");
					printf("  4. Marks Based\n");
					printf("Enter your choice:");
					scanf("%d", &choice2);
					switch(choice2){
						case 1:
							iiitvRandom();
							break;
						case 2:
							ID_Based();
							//ID_Based - tushar
							break;
						case 3:
							//Name Based - suraj
							nameBased();
							break;
						case 4:
							markBased();
							//Mark Based - suyash
							break;
						default:
							printf("Invalid Chocie\n");
							break;

					}
					fflush(stdin);
					printf("Categorize further(Y/N): ");
					scanf("%c", &toRecur);
				} while(toRecur == 'Y' || toRecur == 'y');	
			}
			else printf("Invalid Entry");
		} 
		else printf("Error occured\n");

	}
	else if(fchoice==2){
		sjump:
		printf("\n  1. Random Group Generator\n");
		printf("  2. Manual Group Generator\n\n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		printf("--------------------------------------------------\n");

		if(choice == 1){
			int numberOfPeople;
			printf("Enter number of people:");
			scanf("%d",&numberOfPeople);
			int ng;
			printf("Enter number of people in each group:");
			scanf("%d", &ng);
			randomGroupGenerator(numberOfPeople, ng);
			printf("\nPress Enter to continue");
			getch();
			goto sjump;
		}
		else if(choice == 2){
			printf("\n  Database entries: \n");
			char toRecur = 'Y';			
			do{
				addPerson();
				fflush(stdin);
				printf("Enter next Person(Y/N): ");
				scanf("%c", &toRecur);
				printf("--------------------------------------------------\n");
			} while(toRecur == 'Y' || toRecur == 'y');
			printf("#Database updated\n");

			toRecur = 'Y';
			do{
				printf("---------------------------------------------------\n");
				printf("\t\t#Categorizing to Groups#\n");
				printf("\n  1. ID Based\n");
				printf("  2. Name Based\n");
				printf("  3. Marks Based\n\n");
				printf("Enter your choice:");
				scanf("%d", &choice2);
				switch(choice2){
					case 1:
						ID_Based();
						//ID_Based - Tanmay T
						break;
					case 2:
						//Name Based - Suyash
						nameBased();
						break;
					case 3:
						markBased();
						//Mark Based - Tushar
						break;
					default:
						printf("Invalid Chocie\n");
						break;

				}
				printf("Categorize further(Y/N): ");
				scanf("%c", &toRecur);
			} while(toRecur == 'Y' || toRecur == 'y');
			
		} 
		else printf("Invalid Chocie\n");
	}
	else printf("Invalid Entry");	

	return 0;
}


/* @author tarun mali
 * @param password
 * password : string of password passed
 * Checks for password
 * @return 1 for correct password
 */
int checkPsswd(char password[]){
	//char pass[]="fourteen";
	printf("Enter password\n");
	char cpass[20];
	do{
		scanf("%s",cpass);//make this invisible
		if(strcmp(password, cpass)==0){
			return 1;
			break;
		}
		else{
			printf("Try again\n");
		}	
	}while(1);
}


/* @author alex tamboli
 * @param np, ng
 * np : total number of people
 * ng : number of people in one group
 * Creates random groups with ng people in them for np people.
 * @return null prints the result to console itself.
 */
void randomGroupGenerator(int np, int ng) {
 	int arr[np];
 	for(int i = 0; i < np ;i++){
 		arr[i] = i+1;
 	}

 	shuffle(arr, np);
 	int rem = np%ng;
 	int count = 1;
 	printf("Group no. : Id's\n");
	for(int i = 0; i < np - rem; i = i + ng){
		printf(" %d        : ", count);
		for(int j = 0; j < ng; j++){
			printf("%d ", arr[i+j]);
		}
		count++;
		printf("\n");
	}
	if(rem == 0) return;
	printf(" %d        : ", count);
	for(int i = 1; i <= rem; i++){
		count++;
		printf("%d ", arr[sizeof(arr)/sizeof(arr[0]) - i]);
	}
}


/* @author tarun mali
 * @param np, ng
 * np : total number of people
 * ng : number of people in one group
 * Creates random groups with ng people in them for np people.
 * @return null prints the result to console itself.
 */
void iiitvRandom(){
	printf("Enter number of people in each group:");
	int ng;
	scanf("%d", &ng);
	int arrdiu[]={database[0].ID=202011001, database[1].ID=202011002, database[2].ID=202011003, database[3].ID=202011004, database[4].ID=202011005, database[5].ID=202011006, database[6].ID=202011007, database[7].ID=202011008, database[8].ID=202011009, database[9].ID=202011010, database[10].ID=202011012, database[11].ID=202011013, database[12].ID=202011014, database[13].ID=202011015, database[14].ID=202011016, database[15].ID=202011017, database[16].ID=202011018, database[17].ID=202011019, database[18].ID=202011020, database[19].ID=202011021, database[20].ID=202011022, database[21].ID=202011023, database[22].ID=202011024, database[23].ID=202011026, database[24].ID=202011027, database[25].ID=202011028, database[26].ID=202011029, database[27].ID=202011030, database[28].ID=202011031, database[29].ID=202011032, database[30].ID=202011033,database[31].ID=202011034, database[32].ID=202011035, database[33].ID=202011036, database[34].ID=202011037, database[35].ID=202011038, database[36].ID=202011039, database[37].ID=202011040, database[38].ID=202011041, database[39].ID=202011042, database[40].ID=202011043, database[41].ID=202011044, database[42].ID=202011045, database[43].ID=202011046, database[44].ID=202011047, database[45].ID=202011048, database[46].ID=202011050, database[47].ID=202011051, database[48].ID=202011052, database[49].ID=202011053, database[50].ID=202011054, database[51].ID=202011055, database[52].ID=202011056, database[53].ID=202011057, database[54].ID=202011058, database[55].ID=202011059, database[56].ID=202011060, database[57].ID=202011061, database[58].ID=202011062, database[59].ID=202011063, database[60].ID=202011064, database[61].ID=202011065, database[62].ID=202011066, database[63].ID=202011067, database[64].ID=202011068, database[65].ID=202011069, database[66].ID=202011070, database[67].ID=202011071, database[68].ID=202011072, database[69].ID=202011073, database[70].ID=202011074, database[71].ID=202011075, database[72].ID=202011076, database[73].ID=202011077, database[74].ID=202011078, database[75].ID=202011079, database[76].ID=202011080};
	shuffle(arrdiu, COUNT_FOR_PERSON);
	int rem = COUNT_FOR_PERSON % ng;
	int count = 1;
	printf("Group no. : Id's\n");
	for(int i = 0; i < COUNT_FOR_PERSON - rem; i = i + ng) {
		printf(" %d        : ", count);
		for(int j = 0; j < ng; j++){
			printf("%d ", arrdiu[i+j]);
		}
	count++;
	printf("\n");
	}
	printf(" %d        : ", count);
	for(int i = 1; i <= rem; i++){
		count++;
		printf("%d ", arrdiu[sizeof(arrdiu)/sizeof(arrdiu[0]) - i]);
	}
	printf("\n");
}


/* @author tamboli alex
 * @update COUNT_FOR_PERSON for each entry
 * Adds person to the database
 */
void addPerson(){
	fflush(stdin);
	printf("ID: ");scanf("%d",&database[COUNT_FOR_PERSON].ID);
    printf("FirstName: ");scanf("%s", &database[COUNT_FOR_PERSON].name);
    printf("Marks: ");scanf("%d",&database[COUNT_FOR_PERSON].marks);
    COUNT_FOR_PERSON++;
}


/* @author suyash rajput
 * @update COUNT_FOR_PERSON for each entry
 * Adds person to the database
 */
void nameBased(){
	int ng;
	printf("Enter number of people in each group:");
	scanf("%d", &ng);
	char* a[COUNT_FOR_PERSON];
	for(int i = 0; i < COUNT_FOR_PERSON; i++){
		a[i] = getName(i);
	}

	for (int i = 0; i < COUNT_FOR_PERSON; i++) {
      	for (int j = i+1; j < COUNT_FOR_PERSON; j++)
         	if (strcmp(a[i], a[j]) > 0) {
          	  	char* temp = a[i]; 
           	 	a[i] = a[j]; 
           		a[j] = temp; 
        }
       	//printf("%s ", a[i]);
   	}
   	
   	printf("Group no. : Names\n");
   	int count = 1;
   	int rem = COUNT_FOR_PERSON % ng;
   	for(int i = 0; i < COUNT_FOR_PERSON - rem; i = i + ng){
   		printf(" %d        : ", count);
   		for(int j = 0; j < ng; j++){
   			printf("%s   ", a[i+j]);
   		}
   		count++;
		printf("\n");
   	}
   	if(rem == 0) return;
   	printf(" %d        : ", count);
	for(int i = 1; i <= rem; i++){
		count++;
		printf("%s   ", a[sizeof(a)/sizeof(a[0]) - i]);
	}
	printf("\n");
}


/* @author Tanmay T / alex tamboli
 * @update COUNT_FOR_PERSON for each entry
 * Adds person to the database
 */
void ID_Based(){
	int ng;
	printf("Enter number of people in each group:");
	scanf("%d", &ng);
	int arr[COUNT_FOR_PERSON];
	for(int i = 0; i < COUNT_FOR_PERSON; i++){
		arr[i] = getID(i);
	}

	arraySort(arr, COUNT_FOR_PERSON);

	int rem = COUNT_FOR_PERSON % ng;
 	int count = 1;
 	printf("Group no. : Id's\n");
	for(int i = 0; i < COUNT_FOR_PERSON - rem; i = i + ng){
		printf(" %d        : ", count);
		for(int j = 0; j < ng; j++){
			printf("%s(%d) ", findByID(arr[i+j]).name, arr[i+j]);
		}
		count++;
		printf("\n");
	}
	if(rem == 0) return;
	printf(" %d        : ", count);
	for(int i = 1; i <= rem; i++){
		count++;
		printf("%s(%d) ", findByID(arr[sizeof(arr)/sizeof(arr[0]) - i]).name,arr[sizeof(arr)/sizeof(arr[0]) - i]);
	}
	printf("\n");
	fflush(stdin);
}


/* @author tushar
 * @update COUNT_FOR_PERSON for each entry
 * Adds person to the database
 */
void markBased(){
	int ng;
	printf("Enter number of people in each group:");
	scanf("%d", &ng);
	struct Person arr[COUNT_FOR_PERSON];
	for(int i = 0; i < COUNT_FOR_PERSON; i++){
		arr[i] = database[i];
	}

	arraySort2(arr, COUNT_FOR_PERSON);

	int rem = COUNT_FOR_PERSON % ng;
 	int count = 1;
 	printf("Group no. : Names(marks)\n");
	for(int i = 0; i < COUNT_FOR_PERSON - rem; i = i + ng){
		printf(" %d        : ", count);
		for(int j = 0; j < ng; j++){
			printf("%s(%d) ", arr[i+j].name, arr[i+j].marks);
			//printf("%s(%d) ", findByID(getID(i+j)).name, arr[i+j]);
		}
		count++;
		printf("\n");
	}
	if(rem == 0) return;
	printf(" %d        : ", count);
	for(int i = 1; i <= rem; i++){
		count++;
		printf("%s(%d) ", arr[sizeof(arr)/sizeof(arr[0]) - i].name,arr[sizeof(arr)/sizeof(arr[0]) - i].marks);
	}
	printf("\n");
}



/*
 * UTILITY FUNCTIONS
 */

/* @author suraj
 * @param arr, n
 * arr : array of integers to be shuffled randomly
 * ng : n : size of the array
 * sorts the array in ascending order
 * @return null, outputs the passed array itself
 */
void arraySort(int arr[], int n) { 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 


/* @author tushar
 * @param arr, n
 * arr : array of integers to be shuffled randomly
 * ng : n : size of the array
 * sorts the array in descending order
 * @return null, outputs the passed array itself
 */
void arraySort2(struct Person list[COUNT_FOR_PERSON], int n){
	struct Person temp;
	for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(list[i].marks < list[j].marks) {    
               temp = list[i];    
               list[i] = list[j];    
               list[j] = temp;    
           }     
        }     
    }    
}
	

/* @author alex tamboli
 * @param arr, n
 * arr : array of integers to be shuffled randomly
 * ng : n : size of the array
 * Shuffles the array randomly using Fisher–Yates shuffle Algorithm(From internet @geeksforgeeks)
 * @return null, shuffles the passed array itself
 */
void shuffle(int arr[], int n) { 
    srand ( time(NULL) ); 
    for (int i = n-1; i > 0; i--) { 
        int j = rand() % (i+1); 
        swap(&arr[i], &arr[j]); 
    } 
}

/* @author alex tamboli
 * Swaping two datatypes, using pointers
 */
void swap (int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 


/* @author alex tamboli
 * @param count : index for the person in the database.
 * @return respective data from the database
 */
int getID(int count){
	return database[count].ID;
}
char* getName(int count){
	return database[count].name;
}
int getMarks(int count){
	return database[count].marks;
}


/* @author alex tamboli
 * @param ID : ID of the person in the database
 * @return respective struct person from the database
 */
struct Person findByID(int ID){
	for(int i = 0; i < COUNT_FOR_PERSON; i++){
		if(getID(i) == ID) return database[i];
	}
}

/* @author alex tamboli
 * @param marks : marks of the person in the database
 * @return respective struct person from the database
 */
struct Person findByMarks(int marks){
	for(int i = 0; i < COUNT_FOR_PERSON; i++){
		if(getMarks(i) == marks) return database[i];
	}
}


/* @author tarun mali
 * @return just prints iiitvdatabase
 */
void printIiitvData(){
	printf("ID            Name--Marks\n");
	printf("*******       ******************************\n");
	for(int i = 0; i < COUNT_FOR_PERSON; i++){
		printf("%d     %s--%d\n", database[i].ID, database[i].name, database[i].marks);	
	}	
}



