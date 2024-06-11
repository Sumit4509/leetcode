class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        HashMap <Integer,Integer> map= new HashMap<>();
        ArrayList<Integer> remaining = new ArrayList<>();
        ArrayList<Integer> result = new ArrayList<>();
        for(int num: arr2){
            map.put(num,0);
        }
        for(int num :arr1){
            if(map.containsKey(num)){
                map.put(num,map.get(num)+1);
            }
            else{
                remaining.add(num);
            }
        }
        Collections.sort(remaining);
        for(int num:arr2){
            for(int j=0;j<map.get(num);j++){
                result.add(num);
            }
        }
        result.addAll(remaining);
        for(int i=0;i<result.size();i++){
            arr1[i]=result.get(i);
        }
// Convert List<Integer> to int[]
        return result.stream().mapToInt(i->i).toArray();   
         }
}