double norm (std::string Norm, double xn, double xo, double h, double xpsn, double xpso){
	// Rn
	if (Norm.compare("Rn")==0){
		return (xn-xo)*(xn-xo);
	}
	
	else {
		// L2
		if (Norm.compare("L2")==0){
			//return(xn-xo)*(xn-xo)*h;
			return(h/6 * ( (xo-xpso)^2 + 4 *( (xn-xpsn)/2-(xo-xpso)/2 )^2 + (xn-xpsn)^2 );
		}
		else {
		// H1
			if (Norm.compare("H1")==0){
				return (h/6 * ( (xo-xpso)^2 + 4 * ( (xn-xpsn)/2-(xo-xpso)/2 )^2 + (xn-xpsn)^2  + (((xn-xpsn)-(xo-xpso))^2/h);
			}
		}
	}
}