//ran out of time, should have just tried to make, or use, some simple text file reader and make my own
//version that sorts through the {} and sorted through the file that way, instead of trying to learn 
//open source json libraries to do this. Sources I used below
//https://attacomsian.com/blog/gson-read-write-json
//https://attacomsian.com/blog/gson-read-json-file
//https://howtodoinjava.com/gson/gson-parse-json-array/
//https://howtodoinjava.com/gson/gson-jsonparser/
//https://stackoverflow.com/questions/9598707/gson-throwing-expected-begin-object-but-was-begin-array
//https://mkyong.com/java/how-to-parse-json-with-gson/
//https://howtodoinjava.com/learningpaths/gson/

import com.google.gson.*;
import java.lang.Object;
import java.io.Reader;
import java.io.Writer;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;
import com.google.gson.reflect.TypeToken;
public class JSONRead 
{
    public String LoanGuid;
    public String LoanId;
    public String BorrowerFirstName;
    public String BorrowerLastName;
    public String SubjectAddress1;
    public String SubjectAddress2;
    public String SubjectCity;
    public String SubjectState;
    public String SubjectZip;
    public Double SubjectAppraisedAmount;
    public Double LoanAmount;
    public Double InterestRate;
    
    public JSONRead() {
    }
    public JSONReadP() {
        System.out.println(this.LoanAmount);
        return this.LoanAmount;
    }
    public JSONRead(String LoanGuid, String LoanId, String BorrowerFirstName, String BorrowerLastName, String SubjectAddress1, 
    String SubjectAddress2, String SubjectCity, String SubjectState, String SubjectZip, Double SubjectAppraisedAmount,
    Double LoanAmount, Double InterestRate) {
        this.LoanGuid = LoanGuid;
        this.LoanId = LoanId;
        this.BorrowerFirstName = BorrowerFirstName;
        this.BorrowerLastName = BorrowerLastName;
        this.SubjectAddress1 = SubjectAddress1;
        this.SubjectAddress2 = SubjectAddress2;
        this.SubjectCity = SubjectCity;
        this.SubjectState = SubjectState;
        this.SubjectZip = SubjectZip;
        this.SubjectAppraisedAmount = SubjectAppraisedAmount;
        this.LoanAmount = LoanAmount;
        this.InterestRate = InterestRate;
    }
    
        // getters and setters, toString() .... (omitted for brevity)
    
     
    public static void main(String[] args) {
        try {
            // create Gson instance
            Gson gson = new GsonBuilder().setPrettyPrinting().create();
     
           // create a reader
           Reader reader = Files.newBufferedReader(Paths.get("loans.json"));
           //System.out.println(reader);
           // convert JSON string to User object
           JSONRead[] user = gson.fromJson(reader,JSONRead[].class);
           List<JSONRead> users = new Gson().fromJson(reader, new TypeToken<List<JSONRead>>() {}.getType());
           
           // print user object
           //System.out.println(user);
           // close reader
           reader.close();
           Writer writer = Files.newBufferedWriter(Paths.get("Test.json"));
           gson.toJson(user, writer);
           writer.close();
           String json = gson.toJson(user);
   
           System.out.println(json);
         } catch (Exception ex) {
         ex.printStackTrace();
         } 
    }
}
