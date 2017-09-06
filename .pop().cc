
/***************************************************************
pop method
Use: Pops the first element off the Stack, implementing a stack
using two single-ended queues.

Parameters: None.
            
Returns: Nothing.
***************************************************************/
void Stack::pop() {
	
	if(q1.empty() == true && q2.empty() == true) //Ensure both queues are not
		return;									                   // empty to avoid an exception.
	
	if(q1.empty() == false){	// If queue 1 is not empty, use it.
		
		while(q1.size() > 1){	// Copy all but the last element.
			
			q2.push(q1.front());	// Place the front element of q1 onto the back
			q1.pop();				// of q2.  Then, remove that item from q2.
		}
			
		q1.pop();					// Pop the last element off of q1.
	}
	
	else {
		
		while(q2.size() > 1){	// Copy all but the last element.
			
			q1.push(q2.front());	// Place the front element of q2 onto the back
			q2.pop();				// of q1.  Then, remove that item from q1.
		}
			
		q2.pop();					// Pop the last element off of q2.
		
	}
}
