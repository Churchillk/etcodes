#include <iostream> 
#include <fstream> 
#include <vector> 
#include <string> 
using namespace std; 
struct Target 
{ 
string name;
 int x; 
 int y; 
 int power;
 int Vector;
 }; 
int Vector<Target> targets; 
void LoadFile()
 { 
String filename; 
Cout << "Enter the name of the file you want to load: " 
Cin >> filename;
 ifstream input(filename); 
If (input.is_open()) 
{ 
while (!input.eof()) 
{ 
Target;
 input >> target.name >> target.x >> target.y >> target.power; 
targets.push_back (target);
 } 
Cout << "File loaded successfully!" << endl; 
} 
else 
{ 
Cout << "Error loading file!" << endl; 
}
 input.close(); 
} 
void ShowTargets() 
{
 Cout << "Name\tX\tY\tPower" << endl; 
for (Target t : targets) 
{ 
Cout << t.name << "\t" << t.x << "\t" << t.y << "\t" << t.power << endl; 
} 
} 
void SearchTarget () 
{ 
string targetName;
 Cout << "Enter the name of the target you want to search: ";
 Cin >> targetName;
 for (Target t : targets)
 { 
if (t.name == targetName) 
{ 
Cout << "Name: " << t.name << endl 
<< "X: " << t.x << endl 
<< "Y: " << t.y << endl
 << "Power: " << t.power << endl; 
break;
 }
 } 
} 
void PlanAirstrike() 
{ 
String targetName; 
Cout << "Enter the name of the target you want to plan for airstrike: "; 
cin >> targetName; 
for (Target t : targets)
 {
 if (t.name == targetName) 
{
 Cout << "Target found!" << endl; 
cout << "Name: " << t.name << endl 
<< "X: " << t.x << endl 
<< "Y: " << t.y << endl 
<< "Power: " << t.power << endl; 
cout << "Enter the damage zone of the missile (in km): "; 
int damageZone; 
cin >> damageZone; 
for (Target t2 : targets)
 {
 Int distance = abs(t.x - t2.x) + abs(t.y - t2.y);
 if (distance <= damageZone)
 { 
cout << t2.name << " is within the damage zone of the missile!" << endl; 
} 
} 
break; 
} 
}
 }
 void ExecuteAirstrike () 
{ 
string targetName; 
Cout << "Enter the name of the target you want to execute airstrike on: ";
 cin >> targetName;
 for (Target t : targets) 
{ 
if (t.name == targetName) 
{ 
cout << "Target found!" << endl; 
cout << "Name: " << t.name << endl
 << "X: " << t.x << endl 
<< "Y: " << t.y << endl 
<< "Power: " << t.power << endl; 
cout << "Airstrike executed successfully!" << endl;
 break; 
}
 } 
} 
int main ()

{ 
bool quit = false;
 while (!quit) 
{
 cout << "1) Load a target file" << endl; 
cout << "2) Show current targets" << endl; 
cout << "3) Search a target" << endl; 
cout << "4) Plan an airstrike" << endl; 
cout << "5) Execute an airstrike" << endl; 
cout << "6) Quit" << endl; 
cout << "Enter your choice: "; 
int choice; 
cin >> choice; 
switch (choice)
 { 
Case 1: LoadFile (); break; 
Case 2: ShowTargets (); break;
 Case 3: SearchTarget (); break;
 Case 4: PlanAirstrike (); break;
 Case 5: ExecuteAirstrike (); break;
 Case 6: quit = true; break; 
default: cout << "Invalid choice!" << endl; break;
} 
} 
return 0; 
}


#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <stdbool.h> 
#include <math.h> 
#define MAX_NAME 15 
#define MAX_VALUE 15 
#define MAX_TARGETS 20
 #define MIN_DISTANCE 0.1
 // Data structure for a target 
struct Target { 
char name[MAX_NAME + 1];
 double x; 
double y;
 };
 // Data structure for a linked list 
struct Node 
{ 
struct Target target; 
struct Node *next;
 };
 // Function prototypes 
void main_menu(); 
void load_target_file();
 void show_current_targets(); 
void search_target(); 
void plan_airstrike(); 
void execute_airstrike();
 bool is_valid_target_file(FILE *fp); 
struct Node *create_target_list(FILE *fp); 
bool is_valid_target(char *name, double x, double y);
 bool is_conflict_target(struct Node *head, struct Target target); 
void add_target(struct Node **head, struct Target target); 
void print_target_list(struct Node *head); 
void clear_target_list(struct Node **head);
 int total_targets(struct Node *head); 
int compute_min_missiles(struct Node *head, double radius); 
double compute_min_radius(struct Node *head); 
double compute_distance(struct Target target1, struct Target target2); 
void remove_target_in_range(struct Node **head, struct Target center, double radius); 
int main(int argc, char **argv) 
{ 
main_menu();
 return 0;
 } 
// Display the main menu to the user and call the appropriate function void main_menu() 
{ 
struct Node *head = NULL;
 int option;
 while(true)
 { printf("Option: "); 
scanf("%d", &option); 
switch(option) 
{
 case 1:
 load_target_file(&head); 
break; 
case 2: 
show_current_targets(head); 
break; 
case 3: 
search_target(head); 
break; 
case 4: 
plan_airstrike(head); 
break; 
case 5:
 execute_airstrike(&head); break; 
case 6: 
clear_target_list(&head); 
exit(0); 
default: 
printf("Unknown option.\n"); 
break; 
}
 } 
}
 // Read a valid target file and add it to the target list 
void load_target_file(struct Node **head)
 { char filename[256]; 
printf("Enter a target file: "); 
scanf("%s", filename); 
// Open file
 FILE *fp = fopen(filename, "r"); 
if(fp == NULL) { 
printf("Invalid file.\n"); 
return; 
} 
// Check if the target file is valid 
if(!is_valid_target_file(fp)) {
 printf("Invalid file.\n");
 fclose(fp); 
return;
 }
 // Create a target list struct Node *new_head = create_target_list(fp); 
fclose(fp);
 // Add the new list to the existing list 
struct Node *curr = new_head;
 while(curr != NULL)
 { if(!is_conflict_target(*head, curr->target))
 { add_target(head, curr->target);
 }
 curr = curr->next;
 }
 clear_target_list(&new_head); 
} 
// Print all the targets in the target list
 void show_current_targets(struct Node *head)
 { if(head == NULL) { printf("No target.\n");
 return; } print_target_list(head);
 }
 // Search for a target with a given name
 void search_target(struct Node *head) 
{ 
char name[MAX_NAME + 1];
 printf("Enter the name: "); 
scanf("%s", name); 
// If no character is entered, do nothing if(strlen(name) == 0) { 
return; 
} 
bool found = false;
 struct Node *curr = head; while(curr != NULL)
 { 
// Check if the name contains the given string if(strstr(curr->target.name, name) != NULL) 
{
 printf("%s %.4f %.4f\n", curr->target.name, curr->target.x, curr->target.y); found = true; 
} curr = curr->next;
 } 
if(!found) { printf("Entry does not exist.\n"); 
}
 } 
// Plan an airstrike void plan_airstrike(struct Node *head) {
 if(head == NULL) { printf("No target.\n");
 return; 
} 
int option; while(true) {
 printf("Option a) Plan amount of nuclear missiles\n"); 
printf("Option b) Plan damage zone of nuclear missiles\n"); 
printf("Option c) Quit option 4\n"); printf("Option: "); 
scanf("%d", &option); 
switch(option) {
 case 'a':
 { 
double radius; 
printf("Enter the radius of damage zone of single nuclear missile: ");
 scanf("%lf", &radius); 
int num_missiles = compute_min_missiles(head, radius); 
printf("%d nuclear missiles needed.\n", num_missiles);
 break;
 } 
case 'b': { double radius = compute_min_radius(head); 
printf("Required minimum radius of damage zone %.2f.\n", radius);
 break; } case 'c': return; 
default: printf("Unknown option.\n");
 break;
 } 
} 
} 
// Execute an airstrike on a given collision point
 void execute_airstrike(struct Node **head) {
 if(*head == NULL) { printf("No target.\n");
 return; 
}
 double x, y, radius;
 printf("Enter the targeted collision point and damage zone of a nuclear missile: "); 
scanf("%lf %lf %lf", &x, &y, &radius); 
struct Target center; center.x = x; center.y = y; int num_destroyed = 0;
 struct Node *curr = *head; while(curr != NULL) 
{ 
// Check if the target is within the damage zone if(compute_distance(center, curr->target) <= radius) 
{
 num_destroyed++; printf("%s %.4f %.4f\n", curr->target.name, curr->target.x, curr->target.y);
 }
 curr = curr->next; 

}
 // Remove the destroyed targets remove_target_in_range(head, center, radius); 
if(num_destroyed == 0) { printf("No target aimed. Mission cancelled.\n"); 
} 
Else
 { 
printf("%d targets destroyed.\n", num_destroyed);
 } 
}
 // Check if a target file is valid bool is_valid_target_file(FILE *fp)
 { 
char buffer[256];
 while(fgets(buffer, sizeof(buffer), fp) != NULL)
 {
 // Remove the trailing newline character int len = strlen(buffer); 

return 0;
}

