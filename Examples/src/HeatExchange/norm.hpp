double norm (std::string Norm, double xn, double xo, double h, double xpsn, double xpso){
	// Rn
	if (Norm.compare("Rn")==0){
		return (xn-xo)*(xn-xo);
	}
	
	else {
		// L2
		double res=(xn-xo)*(xn-xo)*h;
		
		// H1
			if (Norm.compare("H1")==0){
				res= res + ((xn-xpsn)-(xo-xpso))*((xn-xpsn)-(xo-xpso))/h ;
			}
		return (res);
	}
}