import QtQuick 2.4
import QtQuick.Controls 2.5

SBBForm {



footer: TabBar {
     id: tabBar
     currentIndex: swipeView.currentIndex

     TabButton {
         text: qsTr("Page 1")
     }
     TabButton {
         text: qsTr("Page 2")
     }
     TabButton {
         text:  qsTr("SBB")
     }
}
}
