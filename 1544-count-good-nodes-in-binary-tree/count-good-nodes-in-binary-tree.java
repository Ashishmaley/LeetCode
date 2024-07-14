/*
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    void check(TreeNode root,int n,int [] arr){
        if(root==null)return;
        if(root.val>=n){
            arr[0]++;
            n=root.val;
        }
        check(root.left,n,arr);
        check(root.right,n,arr);
    } 
    public int goodNodes(TreeNode root) {
        int[] arr = new int[1];
        arr[0] = 0;
        check(root, Integer.MIN_VALUE, arr);
        return arr[0];
    }
}
