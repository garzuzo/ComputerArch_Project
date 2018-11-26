import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Arrays;

public class Generador {

	private int[] arrInt;
	public int[] getArrInt() {
		return arrInt;
	}

	public double[] getArrDouble() {
		return arrDouble;
	}

	public float[] getArrFloat() {
		return arrFloat;
	}

	public int[] getArrIntInverso() {
		return arrIntInverso;
	}

	public double[] getArrDoubleInverso() {
		return arrDoubleInverso;
	}

	public float[] getArrFloatInverso() {
		return arrFloatInverso;
	}

	public int[] getArrIntPseudoAleatorio() {
		return arrIntPseudoAleatorio;
	}

	public double[] getArrDoublePseudoAleatorio() {
		return arrDoublePseudoAleatorio;
	}

	public float[] getArrFloatPseudoAleatorio() {
		return arrFloatPseudoAleatorio;
	}

	private double[] arrDouble;
	private float[] arrFloat;
	
	public void generadorArreglosAleatorios(int tamano) {
		arrInt= new int[tamano];
		arrDouble=new double[tamano];
		arrFloat= new float[tamano];
		for(int i=0; i<tamano; i++) {
			float randomFloat= (float)(Math.random()*1000)+1;
			arrFloat[i]=randomFloat;
			double randomDouble= (double)randomFloat;
			arrDouble[i]= randomDouble;
			int randomInt= (int)Math.floor(randomDouble);
			arrInt[i]= randomInt;
		}
	}
	
	private int[] arrIntInverso;
	private double[] arrDoubleInverso;
	private float[] arrFloatInverso;
	
	public void generadorArreglosOrdenadoInverso(int tamano) {

	    generadorArreglosAleatorios(tamano);
		Arrays.sort(arrInt);
		Arrays.sort(arrDouble);
		Arrays.sort(arrFloat);
		
		arrIntInverso= new int[tamano];
		arrDoubleInverso= new double[tamano];
		arrFloatInverso= new float[tamano];
		for(int i=tamano-1, j=0; i>=0;i--, j++) {
			arrIntInverso[j]= arrInt[i];
			arrDoubleInverso[j]= arrDouble[i];
			arrFloatInverso[j]= arrFloat[i];
		}
	}
	
	private int[] arrIntPseudoAleatorio;
	private double[] arrDoublePseudoAleatorio;
	private float[] arrFloatPseudoAleatorio;
	public void generadorArreglosPseudoaleatorios(int tamano) {
				
		generadorArreglosOrdenadoInverso(tamano);
		
		arrIntPseudoAleatorio= new int[tamano];
		arrDoublePseudoAleatorio= new double[tamano];
		arrFloatPseudoAleatorio= new float[tamano];
		
		arrIntPseudoAleatorio= Arrays.copyOfRange(arrIntInverso, 0,tamano);
		arrDoublePseudoAleatorio= Arrays.copyOfRange(arrDoubleInverso, 0,tamano);
		arrFloatPseudoAleatorio= Arrays.copyOfRange(arrFloatInverso, 0,tamano);
		
		System.out.println(arrFloatInverso.length);
		for(int i=tamano/2; i<tamano; i++) {
			float randomFloat2= (float)(Math.random()*1000)+1;
			arrFloatPseudoAleatorio[i]=randomFloat2;
			double randomDouble2= (double)randomFloat2;
			arrDoublePseudoAleatorio[i]= randomDouble2;
			int randomInt2= (int)Math.floor(randomDouble2);
			arrIntPseudoAleatorio[i]= randomInt2;
		}
	}
	
	public void escribirArchivoInt(int[] arr, int n, String nombre){

		  BufferedWriter writer;
		try {
			writer = new BufferedWriter(new FileWriter("./"+nombre+".txt"));
			
			for(int i=0; i<n; i++) {
				writer.write(arr[i]+ " ");
			}

			  writer.close();		  
		} catch (IOException e) {
			System.out.println("No se crearon las palabras");
		}
   }
	
	public void escribirArchivoDouble(double[] arr, int n, String nombre){

		  BufferedWriter writer;
		try {
			writer = new BufferedWriter(new FileWriter("./"+nombre+".txt"));
			
			for(int i=0; i<n; i++) {
				writer.write(arr[i]+ " ");
			}

			  writer.close();		  
		} catch (IOException e) {
			System.out.println("No se crearon las palabras");
		}
 }
	public void escribirArchivoFloat(float[] arr, int n, String nombre){

		  BufferedWriter writer;
		try {
			writer = new BufferedWriter(new FileWriter("./"+nombre+".txt"));
			
			for(int i=0; i<n; i++) {
				writer.write(arr[i]+ " ");
			}

			  writer.close();		  
		} catch (IOException e) {
			System.out.println("No se crearon las palabras");
		}
}
}
