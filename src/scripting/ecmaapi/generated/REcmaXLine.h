// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMAXLINE_H
        #define RECMAXLINE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RXLine.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaXLine {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRShape(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRDirected(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RDirected:
        

        // methods of secondary base class RDirected:
        static  QScriptValue
        getDistanceFromStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // properties:
    static  QScriptValue getSetBasePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetDirectionVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // public methods:
    static  QScriptValue
        getLineShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        to2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBasePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBasePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSecondPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSecondPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirectionVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDirectionVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSideOfPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClippedLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stretch
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RXLine* getSelf(const QString& fName, QScriptContext* context)
    ;static RXLine* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    