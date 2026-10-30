# Lab 7 Questions  

### 1. Railway Ticket Fare– Single Inheritance  
Create a base class Ticket containing the passenger’s name and distance travelled in kilometres. Derive a class RailwayTicket containing the fare per kilometre. Calculate the ticket fare. If the distance exceeds 300 km, apply a 10% discount to the calculated fare. Use a constructor to initialize the data members and display the passenger details and final fare.  

### 2. Digital Image Metadata– Multilevel Inheritance   
Create the following hierarchy: 
Image → CompressedImage → EncryptedImage The class Image stores image width and height in pixels. The class CompressedImage stores the compression ratio as a percentage. The class EncryptedImage stores the encryption algorithm name. Calculate the original number of pixels and the effective pixel-equivalent size after compression. Display all image metadata.   
Hint: Calculate the effective size as the original pixel count multiplied by the compression percentage divided by 100.    

### 3. Examination Eligibility– Hierarchical Inheritance   
Create a base class Candidate containing a candidate ID and attendance percentage. Derive two classes, RegularCandidate and ReappearCandidate. A regular candidate is eligible if attendance is at least 75%. A reappear candidate is eligible if attendance is at least 60%. Implement a function in each derived class to check eligibility and display the result.    

### 4. University Resource Access – Multiple Inheritance  
Create two base classes, LibraryAccess and LaboratoryAccess. The class LibraryAccess stores the number of books currently borrowed, while LaboratoryAccess stores the number of pending lab submissions. Derive a class StudentAccess from both classes. A student receives full resource access only if they have borrowed no more than five books and have no pending lab submissions. Display the student’s access status. Use constructors to initialize all data members.  

### 5. Smart Agriculture– Hybrid Inheritance  
Design the following hierarchy: 
                Sensor 
                ↙ ↘ 
        Temperature Humidity 
                ↘ ↙ 
            FarmMonitor   
The class Sensor stores a sensor ID. The class Temperature stores the temperature in Celsius. The class Humidity stores the relative humidity percentage. The class FarmMonitor displays all sensor information and issues a warning if the temperature exceeds 35 degrees Celsius or the humidity exceeds 80%. Use virtual inheritance so that FarmMonitor contains only one copy of Sensor.