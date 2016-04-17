double norm (std::string Norm, double xn, double xo, double h, double xpsn, double xpso){
	// Rn norm
	if (Norm.compare("Rn")==0){
		return (xn-xo)*(xn-xo);
	}
	
	else {
		// L2 norm
		if (Norm.compare("L2")==0){
			return(xn-xo)*(xn-xo)*h;
		}
		else {
		// H1 norm
			if (Norm.compare("H1")==0){
				return ((xn-xo)*(xn-xo)*h) + (((xn-xpsn)-(xo-xpso))^2/h);
			}
		}
	}
}