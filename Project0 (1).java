package Projects;
import javax.swing.JOptionPane;
public class Project0 {

	public static void main(String[] args) {
	    while (true) { // The program uses a while (true) loop to continuously prompt the user for input until they type "Stop".
		    String input = JOptionPane.showInputDialog("Please type a sentence (type 'Stop' to exit):"); // Ask the user to input a sentence

		    if (input.equalsIgnoreCase("Stop")) { // Check if the user wants to stop the program
		        break;
		    }

		    int upperCaseCount = 0; // Initialize counters for upper and lower case 'E's
		    int lowerCaseCount = 0; // Initialize counters for upper and lower case 'E's, initializes two counters (upperCaseCount and lowerCaseCount) and iterates through each character in the input string to count occurrences of 'E' and 'e'.
            
		    for (int i = 0; i < input.length(); i++) { // Examine each character in the string
		        char currentChar = input.charAt(i);
		        if (currentChar == 'E') {
		            upperCaseCount++;
		        } else if (currentChar == 'e') {
		            lowerCaseCount++; // After counting, it displays the results in a message dialog using JOptionPane.showMessageDialog()
		        }
		    }

		    // Show the results in a message dialog
		    String message = "Lower-case 'e': " + lowerCaseCount + "\nUpper-case 'E': " + upperCaseCount;
		    JOptionPane.showMessageDialog(null, message);
	  }
   }
}

//Noor Hafeez
//Lab Section 121C


