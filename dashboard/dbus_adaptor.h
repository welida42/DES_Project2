/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a dbus_adaptor dbus_test.xml
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUS_ADAPTOR_H
#define DBUS_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.example.CanData
 */
class CanDataAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.example.CanData")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.example.CanData\">\n"
"    <method name=\"SetData\">\n"
"      <arg direction=\"in\" type=\"d\" name=\"speed\"/>\n"
"      <arg direction=\"in\" type=\"d\" name=\"rpm\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    CanDataAdaptor(QObject *parent);
    virtual ~CanDataAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void SetData(double speed, double rpm);
Q_SIGNALS: // SIGNALS
};

/*
 * Adaptor class for interface local.CanDataReceiver
 */
class CanDataReceiverAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "local.CanDataReceiver")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"local.CanDataReceiver\">\n"
"    <property access=\"read\" type=\"d\" name=\"speed\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"rpm\"/>\n"
"    <signal name=\"speedChanged\">\n"
"      <arg direction=\"out\" type=\"d\" name=\"newSpeed\"/>\n"
"    </signal>\n"
"    <signal name=\"rpmChanged\">\n"
"      <arg direction=\"out\" type=\"d\" name=\"newRpm\"/>\n"
"    </signal>\n"
"    <method name=\"onDataReceived\">\n"
"      <arg direction=\"in\" type=\"d\" name=\"speed\"/>\n"
"      <arg direction=\"in\" type=\"d\" name=\"rpm\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    CanDataReceiverAdaptor(QObject *parent);
    virtual ~CanDataReceiverAdaptor();

public: // PROPERTIES
    Q_PROPERTY(double rpm READ rpm)
    double rpm() const;

    Q_PROPERTY(double speed READ speed)
    double speed() const;

public Q_SLOTS: // METHODS
    void onDataReceived(double speed, double rpm);
Q_SIGNALS: // SIGNALS
    void rpmChanged(double newRpm);
    void speedChanged(double newSpeed);
};

#endif