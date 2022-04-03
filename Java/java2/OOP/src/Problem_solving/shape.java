
package Problem_solving;

abstract public class shape {
    
    double dim1,dim2;
    
    shape (double dim1,double dim2){
        this.dim1 = dim1;
        this.dim2 = dim2;
    }
    
    abstract void area();
}
