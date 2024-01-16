        CMD Challenge Project
    
Welcome to the CMD Challenge project! This project is designed to enhance your Bash skills through a series of command line challenges. Before you start, make sure to follow the steps below to meet the project requirements and demonstrate your completion.

        General Requirements
	
1.README.md File: Ensure there is a README.md file at the root of the project folder. This file is crucial for providing information about your project.

2.Manual Review: Keep in mind that this project will undergo a manual review. As you complete tasks, the names of those tasks should turn green.

3.Screenshots: Take screenshots showcasing your completion of the required levels. Push these screenshots to GitHub in either PNG or JPEG format.

        Specific Requirements
	
Follow these steps to fulfill the specific requirements related to SFTP usage:

         1.Take Screenshots
	 
Complete the required levels in the CMD Challenge, and take screenshots to showcase your accomplishments.

         2. Use SFTP to Transfer Screenshots to Sandbox Environment.
	 
1.Open a terminal or command prompt on your local machine.

2.Use the SFTP command-line tool to establish a connection to the sandbox environment. Utilize the provided hostname, username, and password for access.

3.Once connected, navigate to the directory where you want to upload the screenshots on the sandbox environment.

4.Use the put command in SFTP to upload the screenshots from your local machine to the sandbox environment.

5.Confirm the successful transfer by checking the sandbox directory.

       3. Update README.md
       
Include the following steps in your project's README.md file to guide reviewers on how you performed the SFTP file transfer:

      SFTP File Transfer

Follow these steps to use SFTP for transferring screenshots to the sandbox environment:

1. Open a terminal or command prompt on your local machine.

2. Establish an SFTP connection to the sandbox environment using the provided hostname, username, and password.

a. Test SSH access by command
   
ssh Username@Hostname
  
provide password when prompted
  
b. Exit SSH connection by command
  
exit
   
c. Now establish an SFTP session by command
  
sftp Username@Hostname
  
provide password when prompted
  
3. Navigate to the desired directory on the sandbox environment.
  
a. Navigate file system by command
  
cd directoryname
  
4. Use the `put` command to upload the screenshots from your local machine to the sandbox.
  
a. Upload the files by command
  
put filename
   
5. Confirm the successful transfer by checking the sandbox directory.