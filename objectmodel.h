/* ****************************************************
 * Object Model Class for storing the properties of
 * models taken from .obj files
 *****************************************************/

#ifndef OBJECTMODEL_H
#define OBJECTMODEL_H

#include <QOpenGLFunctions>
#include <QMatrix4x4>
#include <QColor>

class ObjectModel {

public:
    ObjectModel();
	~ObjectModel();

    void setNameAndIndex(QString n, QString f, int i);
    void setPropertiesValues(float xT, float yT, float zT,
                             float xR, float yR, float zR,
                             float xS, float yS, float zS);
    void setModel(QMatrix4x4 matrix);
    void setProjection(QMatrix4x4 matrix);
    void setView(QMatrix4x4 matrix);
    void setKa(float val);
    void setKd(float val);
    void setKs(float val);
    void setN(float val);
    void setMaterialColor(QColor c);

    GLfloat getKa();
    GLfloat getKd();
    GLfloat getKs();
    GLfloat getN();

    QVector3D getKaRGB();
    QVector3D getKdRGB();
    QVector3D getKsRGB();
    QVector3D getColor();
    QColor getActualColor();

    QMatrix4x4 getProjection();
    QMatrix4x4 getView();
    QMatrix4x4 getModel();
    QString getName();
    QString getOriginFile();

    int index;

    float xTrans;
    float yTrans;
    float zTrans;

    float xRot;
    float yRot;
    float zRot;

    float xScale;
    float yScale;
    float zScale;


private:
    QString name;
    QString originFile;
	QMatrix4x4 projection;
	QMatrix4x4 view;
    QMatrix4x4 model;

    GLfloat Ka, Kd, Ks, n;
    QColor mtlColor;

	
};

#endif
