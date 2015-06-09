public class InsertionSort{
	public static void main(String[] arg){
		int input[] = {2,34,546,1234,546,7,8,546,456,324,76,7657,324};		
		int j, key, i;
		for( j = 2; j<input.length; j++){
			key = input[j];
			i = j - 1;
			while(i > 0 && input[i]>key){
				input[i+1] = input[i];
				i = i - 1;
			}
			input[i+1] = key;
		}
		for(int k = 0; k < input.length; k++){
			System.out.println(input[k]);
		}
	}
}