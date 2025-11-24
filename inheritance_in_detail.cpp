/*private->can be accessd in respective class only
protected->can be accessd by child class only 
public -> from anywhere*/

class a{
    private int x;
    protected int y;
    public int z;
}
//Heirerical inheritace
class b:public a{
//x->private(inaccesible)
//y->protected(but accesible)
//z->public
};

class c:protected a{
//x->inaccesible(private)
//y->protected(but accesible)
//z->protected
};

class d:private a{
//x->inaccesible(private)
//y->became private
//z->became private
};
