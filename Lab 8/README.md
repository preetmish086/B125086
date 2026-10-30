# Lab 6 Questions   

### 6.Document Export System   
Create a base class Document with a virtual function exportFile(). Derive classes PDFDocument, TextDocument, and CSVDocument. Override exportFile() in each class to display the appropriate export format and the corresponding file extension. Create objects of all three classes and invoke the overridden function through base-class pointers.  

### 7. Electricity Bill Estimator   
Create a base class ElectricityPlan with a virtual function calculateBill(double units). Derive classes ResidentialPlan and CommercialPlan. For ResidentialPlan, charge Rs. 4 per unit for the first 100 units and Rs. 6 per additional unit. For CommercialPlan, charge Rs. 7 per unit for all units. Override calculateBill() in both derived classes. Use a base-class pointer to calculate and display the bills for both plans.    

### 8. Autonomous Traffic Signal   
Create a base class TrafficSignal with a virtual function getGreenDuration(int vehicleCount). Derive classes UrbanSignal and HighwaySignal. For UrbanSignal, calculate the green duration as 10 +2× vehicle count, capped at 60 seconds. For HighwaySignal, calculate the green duration as 15+3× vehicle count, capped at 90 seconds. Override the function in both derived classes. Display the calculated green duration for each signal using base-class pointers.     

### 9. Data Backup Policy   
Create a base class BackupPolicy with a virtual function calculateStorage() that accepts a parameter of type double representing the data size in MB. Derive classes FullBackup and IncrementalBackup. Override the function in both classes according to the following rules:   
• FullBackup: Required storage is 100% of the given data size.   
• IncrementalBackup: Required storage is 25% of the given data size, plus an additional fixed overhead of 50 MB.  
Use a base-class pointer to invoke the overridden function for both backup policies. Display the required storage for each policy.  

### 10. Scholarship Selection System   
Create a base class Scholarship with a virtual function calculateAward(double marks, double familyIncome). DeriveclassesMeritScholarship and NeedBasedScholarship. For MeritScholarship, award Rs. 20,000 if marks are at least 90; otherwise, award Rs. 10,000 if marks are at least 80; otherwise, award Rs. 0. For NeedBasedScholarship, award Rs. 25,000 if family income is below Rs. 2,00,000 and marks are at least 70; otherwise, award Rs. 0. Override the function in both derived classes. Use a base-class pointer to calculate and display the scholarship award under each scheme.