// ============================================================================
//
// Copyright (c) 1997-2000 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------------
//
// file          : include/CGAL/IO/Qt_widget_view.h
// package       : Qt_widget
// author(s)     : Laurent Rineau & Radu Ursu
// release       : 
// release_date  : 
//
// coordinator   : Laurent Rineau <rineau@clipper.ens.fr>
//
// ============================================================================

#ifndef CGAL_QT_WIDGET_VIEW_H
#define CGAL_QT_WIDGET_VIEW_H

#include <CGAL/IO/Qt_widget.h>
#include <qobject.h>
#include <list>


namespace CGAL {

class Qt_widget_view : public QObject {
  Q_OBJECT
public:
  virtual ~Qt_widget_view(); // allow Qt_Scene_widget to
	                     // detach the scene
  // Event handlers
  virtual void mousePressEvent(QMouseEvent *, Qt_widget&) {} ;
  virtual void mouseReleaseEvent(QMouseEvent *, Qt_widget&) {};
  virtual void wheelEvent(QMouseEvent *, Qt_widget&) {};
  virtual void mouseDoubleClickEvent(QMouseEvent *, Qt_widget&) {};
  virtual void mouseMoveEvent(QMouseEvent *, Qt_widget&) {};
  virtual void keyPressEvent(QKeyEvent *, Qt_widget&) {};
  virtual void keyReleaseEvent(QKeyEvent *, Qt_widget&) {};
  virtual void enterEvent(QEvent *, Qt_widget&) {};
  virtual void leaveEvent(QEvent *, Qt_widget&) {};

public slots:
  virtual void draw(Qt_widget&)=0;
signals:
  void dying(Qt_widget_view*);
public:
  CGAL::Qt_widget	*win;
};

} // namespace CGAL end

#endif // CGAL_QT_WIDGET_VIEW_H
