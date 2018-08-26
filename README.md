# CS223_Apr_04
Project on Reimbursement System
Done under fullfillment of CS223 course under supervision of Chiranjoy Chattopadhyay
It's a CLI based platform for students, professor and staff members where they can apply for reimbursement. And where they can check whether their plea is accepted or not. Basically there are two phases pre and post. A user can apply before and after the journey and take credit for the amount of money spent.

Getting Started
  Prerequisites
    System must support C++11.
    System must contain g++ compiler for building the files
    System must contain unistd.h library as it is used for taking the password from the user

****************************************Instructions for use*****************************************************************

1) The non-administrative users must register themselves into the database before they can use the system.

2) As a part of the registration process, the users need to fill the required details(Details must be valid).

3) The administrator is created by default with password "algorithm". The user can register and log in into there account.

4) After logging in a user can apply for reimbursemet by pressing 1 on the terminal screen and depending upon the situation can file a request to the admin.
   
5) User can View his/her applied requests by pressing 2;Pre-condition: User must be logged in.

6) User can change password after logging in to the account and without logging into the account.

7) User can logout by entering 4 on the dashboard.

6) Admin can see all the requests and he/she either approve or reject the request depending upon the condition.




Database is getting stored in some seperate files. Basically there are two different type of files getting generated. One to carry user details and one to maintain user reimbursement records. And one more file for storing all username for easy access.

Development team
Zaid Khan(B16CS040)
Nikhil Shirvastav (B16CS020)
