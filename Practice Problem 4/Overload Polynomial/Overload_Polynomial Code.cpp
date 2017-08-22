poly::poly()
{
    num = 20;
	terms = new term[20];
}

poly::poly(poly& b):num(b.num)
{
	terms = new term[b.num];
	for(int q=0; q<b.num; q++)
		terms[q] = b.terms[q];
}


poly::poly(int i):num(i)
{
	terms = new term[i];
}

istream& operator>>(istream& in, term& t)
{
	in.clear();
	in>>t.coeff>>t.expo;
	return in;
}

istream& operator>>(istream& in, poly& p)
{
	in.clear();
	in>>p.num;
	p.terms = new term[p.num];
	term copy_terms[p.num];
	int max = 0;
	for(int q=0; q<p.num; q++){
		in>>p.terms[q];
		copy_terms[q] = p.terms[q];
		if((p.terms[q]).expo > max)
            max = (p.terms[q]).expo;
	}
	delete []p.terms;
	p.terms = new term[max+1];
	for(int q=0; q<=max; q++){
	    int counter = 0, w;
        for(w=0; w<p.num; w++)
            if((copy_terms[w]).expo==q){
                counter = 1;
                break;
            }
        if(counter)
            p.terms[q] = copy_terms[w];
        else{
            (p.terms[q]).coeff = 0;
            (p.terms[q]).expo = q;
        }
	}
	p.num = max+1;
	return in;
}

ostream& operator<<(ostream& out, term& t)
{
	out<<t.coeff<<endl;
	out<<t.expo<<endl;
	return out;
}

ostream& operator<<(ostream& out, poly& p)
{
	for(int q=p.num-1; q!=-1; q--)
        if((p.terms[q]).coeff!=0)
            out<<p.terms[q];
	return out;
}

poly poly::operator+(poly& b)
{
    poly use = terms[0].expo <= (b.terms[0]).expo? *this: b;
    poly not_use = terms[0].expo <= (b.terms[0]).expo? b: *this;
    poly c;
    c.num = not_use.num;
    for(int q=0; q<use.num; q++){
        (c.terms[q]).coeff = (use.terms[q]).coeff + (not_use.terms[q]).coeff;
        (c.terms[q]).expo = (use.terms[q]).expo;
    }
    int temp = not_use.num - use.num;
    for(int q=0; q<temp; q++)
        c.terms[use.num+q] = not_use.terms[use.num+q];
    return c;
}

poly& poly::operator=(const poly& b)
{
	this->num = b.num;
	for(int q=0; q<this->num; q++){
		(this->terms[q]).coeff = (b.terms[q]).coeff;
		(this->terms[q]).expo = (b.terms[q]).expo;
	}
	return *this;
}

poly poly::operator++(int)
{
    poly copy_poly(*this);
    num++;
    terms[num-1].coeff = terms[num-2].coeff+1;
    terms[num-1].expo = terms[num-2].expo+1;
    return copy_poly;
}

poly poly::operator++()
{
    poly copy_new = *this;
    copy_new.num++;
    copy_new.terms[num].coeff = copy_new.terms[num-1].coeff+1;
    copy_new.terms[num].expo = copy_new.terms[num-1].expo+1;
    return copy_new;
}
