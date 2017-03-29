def find_smallest_elem_as_big_as(sequence, subsequence, elem):
 
    low = 0
    high = len(subsequence) - 1
 
    while high > low:
        mid = (high + low) / 2
                                                                      
        if sequence[subsequence[mid]] < sequence[elem]:
            low = mid + 1
                                                        
        else:
            high = mid
 
    return high
 
 
def optimized_dynamic_programming_solution(sequence):
  
 
                                            
    smallest_end_to_subsequence_of_length = []
 
                
    parent = [None for _ in sequence]
 
    for elem in range(len(sequence)):
                                                                    
        if (len(smallest_end_to_subsequence_of_length) == 0 or
                    sequence[elem] > sequence[smallest_end_to_subsequence_of_length[-1]]):
           
            if len(smallest_end_to_subsequence_of_length) > 0:
                parent[elem] = smallest_end_to_subsequence_of_length[-1]
            smallest_end_to_subsequence_of_length.append(elem)
        else:
                       
            location_to_replace = find_smallest_elem_as_big_as(sequence, smallest_end_to_subsequence_of_length, elem)
            smallest_end_to_subsequence_of_length[location_to_replace] = elem
                     
            if location_to_replace != 0:
                parent[elem] = (smallest_end_to_subsequence_of_length[location_to_replace - 1])
 
    
    curr_parent = smallest_end_to_subsequence_of_length[-1]
    longest_increasing_subsequence = []
 
    while curr_parent is not None:
        longest_increasing_subsequence.append(sequence[curr_parent])
        curr_parent = parent[curr_parent]
 
    longest_increasing_subsequence.reverse()
 
    return longest_increasing_subsequence
	
#nlogn solution
x = input()
 
while x>0 :
	m, n = raw_input().split()
	m = int(m)
	n = int(n)
	a = []
	b = []
	b = raw_input().split()
	for i in range(0,len(b)):
		a.append(int(b[i]))
	c = len(optimized_dynamic_programming_solution(a))
	if c>n:
		print "YES"
	else:
		print "NO"
	x = x-1