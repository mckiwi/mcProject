//
// Generated file, do not edit! Created by nedtool 5.4 from MyMessage.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __MYMESSAGE_M_H
#define __MYMESSAGE_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>MyMessage.msg:19</tt> by nedtool.
 * <pre>
 * message MyMessage
 * {
 *     int source;
 *     int destination;
 *     int type;
 *     double pos_x;
 *     double pos_y;
 * 
 *     double ue_x[3000];
 *     double ue_y[3000];
 *     double group[3000];
 * 
 * }
 * </pre>
 */
class MyMessage : public ::omnetpp::cMessage
{
  protected:
    int source;
    int destination;
    int type;
    double pos_x;
    double pos_y;
    double ue_x[3000];
    double ue_y[3000];
    double group[3000];

  private:
    void copy(const MyMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MyMessage&);

  public:
    MyMessage(const char *name=nullptr, short kind=0);
    MyMessage(const MyMessage& other);
    virtual ~MyMessage();
    MyMessage& operator=(const MyMessage& other);
    virtual MyMessage *dup() const override {return new MyMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSource() const;
    virtual void setSource(int source);
    virtual int getDestination() const;
    virtual void setDestination(int destination);
    virtual int getType() const;
    virtual void setType(int type);
    virtual double getPos_x() const;
    virtual void setPos_x(double pos_x);
    virtual double getPos_y() const;
    virtual void setPos_y(double pos_y);
    virtual unsigned int getUe_xArraySize() const;
    virtual double getUe_x(unsigned int k) const;
    virtual void setUe_x(unsigned int k, double ue_x);
    virtual unsigned int getUe_yArraySize() const;
    virtual double getUe_y(unsigned int k) const;
    virtual void setUe_y(unsigned int k, double ue_y);
    virtual unsigned int getGroupArraySize() const;
    virtual double getGroup(unsigned int k) const;
    virtual void setGroup(unsigned int k, double group);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MyMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MyMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef __MYMESSAGE_M_H
