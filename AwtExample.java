import java.awt.*;    
public class AwtExample extends Frame {    
AwtExample(){    
  
Label firstName = new Label("First Name");    
firstName.setBounds(20, 50, 80, 20);    

TextField firstNameTF = new TextField();    
firstNameTF.setBounds(120, 50, 100, 20); 

Label lastName=new Label("Last Name");
lastName.setBounds(20,50,80,20);

TextField lastNameTF=new TextField();
lastName.setBounds(120,50,100,20);

Label mailId=new Label("Mail Id");
mailId.setBounds(20,50,80,20);

TextField mailIdTF=new TextField();
mailId.setBounds(120,50,100,20);

Button sbmt = new Button("Submit");    
sbmt.setBounds(20, 130, 100, 30);    
Button reset = new Button("Reset");    
reset.setBounds(20,130,100,30);    
add(firstName);    
add(firstNameTF);  
add(lastName);
add(lastNameTF);
add(mailId);
add(mailIdTF);  
add(sbmt); 
add(reset);   

setSize(300,300);    
setLayout(null);    
setVisible(true);    
}    

public static void main(String[] args) {    
AwtExample awt = new AwtExample();    
}    
}     