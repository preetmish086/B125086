# Lab 3 Questions  

### 1. Weather Report– Friend Function   
Create a class named Weather containing the following private data members:   
• City Name   
• Temperature   
• Weather Condition   
Write a friend function named generateReport() that accesses the private members and displays a suitable weather report. The function should classify the temperature as follows:   
• Above35◦C–VeryHot   
• 20◦Cto35◦C–Pleasant   
• Below20◦C–Cool   
Hint: The friend function should directly access the private temperature member and perform the classification. 

### 2. Two-Factor Login– Friend Function   
Create a class named UserAccount containing the following private data members:   
• Username   
• Login Attempts   
• Account Status   
Write a friend function named checkAccount() that accesses the private members and checks the account status. If the number of unsuccessful login attempts is 3 or more, display “Account Locked”; otherwise display “Account Active”. The function should also display the username and number of login attempts.   
Hint: Keep all data members private and allow the friend function to access them directly.   

### 3. Compare TwoDigital Cameras– Friend Function   
Create a class named Camera containing the following private data members:   
• Brand   
• Model   
• Megapixels   
• Storage Capacity   
Create two Camera objects. Write a friend function named compareCamera() that determines which camera is better based on the following conditions:   
1. The camera with higher megapixels is considered better.   
2. If both cameras have the same megapixels, the camera with higher storage capacity is considered better. Display the details of the better camera.   
Hint: Pass both Camera objects to the friend function and compare their private members  

### 4. Electricity Usage Alert– Friend Function  
Create a class named ElectricMeter containing the following private data members:   
• Meter Number   
• ConsumerName   
• Units Consumed   
Write a friend function named checkUsage() that accesses the private members and categorizes electricity usage as follows:   
• Below100 units– Low Usage   
• 100to 300 units– Moderate Usage   
• Above300units– High Usage   
Display the consumer details and the corresponding usage category.   
Hint: Use conditional statements inside the friend function to classify the consumption.

### 5. Event Registration Verification– Friend Function   
Create a class named EventParticipant containing the following private data members:   
• Participant Name   
• Age   
• Registration Status   
Write a friend function named verifyParticipant() that determines whether the participant is eligible for the event. A participant is eligible only if:   
• Theparticipant is 18 years or older.   
• Theregistration status is active.   
Display the participant details and either “Eligible” or “Not Eligible”.   
Hint: The friend function should access both the age and registration status directly.  

### 6. Printer Control System– Friend Class   
Create two classes named Printer and PrinterManager. The Printer class should contain the following private data members:   
• Printer Name   
• Number of Pages Printed   
• Ink Level   
• Power Status   
Declare PrinterManager as a friend class of Printer. The PrinterManager class should provide member functions to:   
1. Display printer information.   
2. Turn the printer ON.   
3. Turn the printer OFF.   
4. Check the ink level.   
5. Reset the page count.   
Hint: Since PrinterManager is a friend class, its member functions can directly access and modify the private members of Printer.

### 7. MuseumExhibit Controller– Friend Class   
Create two classes named Exhibit and MuseumManager. The Exhibit class should contain the following private data members:   
• Exhibit Name   
• Exhibit ID   
• Visitor Count   
• Display Status   
Declare MuseumManager as a friend class of Exhibit. The MuseumManager class should provide member functions to:   
1. Display exhibit information.   
2. Addvisitors to the exhibit.   
3. Reset the visitor count.   
4. Open or close the exhibit.   
5. Display whether the exhibit is currently open.   
Hint: The friend class should directly update the visitor count and display status. 

### 8. Vehicle Service Tracker– Friend Class   
Create two classes named VehicleService and ServiceManager. The VehicleService class should contain the following private data members:   
• Vehicle Number   
• OwnerName   
• Service Due Status   
• Last Service Kilometres Declare ServiceManager as a friend class of VehicleService. The ServiceManager class should provide member functions to:   
1. Display vehicle service information.   
2. Mark the service as completed.   
3. Update the last service kilometres.   
4. Check whether the vehicle requires servicing.   
Hint: Use the private service status and last service kilometres to determine whether servicing is required.

### 9. Digital Wallet Controller– Friend Class   
Create two classes named DigitalWallet and WalletManager. The DigitalWallet class should contain the following private data members:   
• UserName   
• Wallet Balance   
• Wallet Status   
Declare WalletManager as a friend class of DigitalWallet. The WalletManager class should provide member functions to:   
1. Display wallet details.   
2. Addmoneytothe wallet.   
3. Deduct money from the wallet if sufficient balance exists.   
4. Disable the wallet.   
5. Display the current wallet status.   
Hint: Before deducting money, check whether the wallet has sufficient balance. The friend class can directly modify the private balance and status.  

### 10. Classroom Attendance Manager– Friend Class   
Create two classes named Classroom and AttendanceManager. The Classroom class should contain the following private data members:   
• Class Name   
• Total Students   
• Present Students   
• Attendance Status   
Declare AttendanceManager as a friend class of Classroom. The AttendanceManager class should provide member functions to:   
1. Display classroom information.   
2. Update the number of present students.   
3. Mark the class attendance as completed.   
4. Display whether attendance has been completed.   
5. Calculate and display the number of absent students.   
Hint: Calculate the number of absent students using: Absent Students = Total Students−Present Students