#include "principal.h"
#include <QTranslator>
#include <QInputDialog>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Crear lista de idiomas
     QStringList idiomas;
     idiomas << "Inglés" << "Español"<<"Chino";
     // Solicitar al usuario que elija el idioma
     QString idiomaSel = QInputDialog::getItem(NULL, "Idioma", "Seleccione el idioma", idiomas);
     // Se crea un objeto para manejar la traducciones
     QTranslator traduccion;
     // Evaluar el idioma seleccionado
     if(idiomaSel == "Inglés")
     {
         traduccion.load(":/Idiomas/Salario_2_en_US.qm");

     }else if(idiomaSel == "Chino"){

         traduccion.load(":/Idiomas/Salario_2_zh_HK.qm");
     }
     else{
         traduccion.load(":/Idiomas/Salario_2_es_EC.qm");
     }
     // Establecer idioma a la aplicación
     a.installTranslator(&traduccion);
    Principal w;
    w.show();
    return a.exec();
}
