import javax.swing.JOptionPane;
public class BasicGUI {
    public static void main(String args[]){
        String name= JOptionPane.showInputDialog("Enter your name BABU!!!");
        JOptionPane.showMessageDialog(null,"Hello "+name+" BABU");
        int age = Integer.parseInt(JOptionPane.showInputDialog("Your age? "));
        JOptionPane.showMessageDialog(null,"YOu are "+age+" Years old ahh!! Nicee!!");
        Double height=Double.parseDouble(JOptionPane.showInputDialog("Enter your Height? "));
        JOptionPane.showMessageDialog(null,"YOu are "+height+" cms Tall ahh!! Nicee!!");
       
        

     }
    
}
