
public class Prueba {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Generador generator= new Generador();
			
//		generator.generadorArreglosAleatorios(4);
//		generator.escribirArchivoInt(generator.getArrInt(), 4, "aleatoriosInt");
//		generator.escribirArchivoDouble(generator.getArrDouble(), 4, "aleatoriosDouble");
//		generator.escribirArchivoFloat(generator.getArrFloat(), 4, "aleatoriosFloat");
//		
//		generator.generadorArreglosOrdenadoInverso(4);
//		generator.escribirArchivoInt(generator.getArrIntInverso(), 4, "inversoInt");
//		generator.escribirArchivoDouble(generator.getArrDoubleInverso(), 4, "inversoDouble");
//		generator.escribirArchivoFloat(generator.getArrFloatInverso(), 4, "inversoFloat");
//		
		generator.generadorArreglosPseudoaleatorios(4);
		generator.escribirArchivoInt(generator.getArrIntPseudoAleatorio(), 4, "pseudoAleatorioInt");
		generator.escribirArchivoDouble(generator.getArrDoublePseudoAleatorio(), 4, "pseudoAleatorioDouble");
		generator.escribirArchivoFloat(generator.getArrFloatPseudoAleatorio(), 4, "pseudoAleatorioFloat");
	}

}
