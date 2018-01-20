public class Solution
 {

    public ArrayList<ArrayList<Integer>> pathSum(TreeNode A, int B) {
   
      ArrayList<ArrayList<Integer>> r = new ArrayList<ArrayList<Integer>>();
   
    ArrayList<Integer> temp = new ArrayList<Integer>();
       
 if(A == null)
   
         return null;
   
     pathSum(A, B, r, temp);

        return r;
    
    
    }

    public void pathSum(TreeNode node, int B, ArrayList<ArrayList<Integer>> r, ArrayList<Integer> temp) 
if(node == null)
  
          return;
    
    int current = node.val;
 
       temp.add(current);
    
    if(node.left == null && node.right == null){
      
      if(B - current == 0){
      
          r.add(new ArrayList<Integer>(temp));
        
    }
    
    }
    
    pathSum(node.left, B - node.val, r, temp);
    
    pathSum(node.right, B - node.val, r, temp);
     
   temp.remove(temp.size() - 1);
       
 
    }
    
  
  
    
    
    
    public static void main(String[] args){
    }

}
