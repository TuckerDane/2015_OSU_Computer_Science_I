/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Name:			Tucker Dane Walker
//
//	Date:			01 August 2015
//
//	Description:	This is a function which takes as parameters an array of ints and the size of that array and returns a vector
//					containing the mode(s). If there is just a single most frequent value, the vector will only contain that one
//					value, but if multiple vlues tie for maximum frequency, the vector will contain all such values. This includes
//					the case where every number in the array appears only once. Each mode appears only once in the vector. The
//					values in the vector are returned in ascending order.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include <vector>
#include <algorithm>

std::vector<int> findMode(int array[], int arraySize)
{
	std::vector<int> frequency;						// stores the frequency of the number stored in the parallel vector, index
	std::vector<int> index;							// holds 1 copy of the ints passed in array[] without duplicates
	std::vector<int> modes;							// holds the mode or modes of the numberset given in array[]

	for (int i = 0; i < arraySize; i++)				// this for loop iterates through array[]
	{
		bool isCounted = false;						// a bool which tells if the number stored at array[i] has already been counted
													
		/*///////////////////////////////////////////////////////////////////
		// this loop checks to see if the value in array[i] has been counted
		///////////////////////////////////////////////////////////////////*/
	
		for (int j = 0; j < index.size(); j++)		// for all of the values stored in index
		{
			if (array[i] == index[j])				// if the number in array[i] has already been indexed
			{
				isCounted = true;					// then it has already been counted
			}
		}
		
		if (!isCounted)								// if the value inside array[i] has not been counted
		{
			index.push_back(array[i]);				// add the value inside array[i] to the index vector
			frequency.push_back(0);					// initializes the frequency to 0

			/*///////////////////////////////////////////////////////////////////////////////////////////
			// this loop counts the frequency of the value stored in array[i] and stores it in frequency
			///////////////////////////////////////////////////////////////////////////////////////////*/

			for (int k = 0; k < arraySize; k++)
			{
				if (array[i] == array[k])				// if the value in array[i] is repeated in array[k]
				{
					frequency[frequency.size()-1]++;	// increase its frequency by 1
				}
			}
			isCounted = true;
		}
	}
	
	/*///////////////////////////////////////////////////////////////////////////////////////////////
	// this loop finds the highest frequencies and pushes them to modes
	///////////////////////////////////////////////////////////////////////////////////////////////*/

	for (int i = 0; i < frequency.size(); i++)
	{
		bool mode = true;

		for (int j = 0; j < frequency.size(); j++)			// for all of the values stored in frequency
		{
			if (i != j && frequency[i] < frequency[j])		// if the value is smaller than any other value in frequency
			{
				mode = false;								// then index[i] is not the mode
			}
		}

		if (mode == true)									// if index[i] is the mode, it will be added to the mode vector
		{
			modes.push_back(index[i]);
		}
	}

	std::sort(modes.begin(), modes.end());					// sorts the modes vector

	return modes;											// returns modes.
}