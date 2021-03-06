import QtQuick 2.0
import Sailfish.Silica 1.0

Item {
    anchors.verticalCenter: parent.verticalCenter

    property string name
    property string prettyName
    property int tag
    property bool valid: true

    property var choice
    property var default_choice

    signal clicked()
    signal choiceMade(int tag, var choice)
    onChoiceChanged: choiceMade(tag, choice)

    property var menu

}
