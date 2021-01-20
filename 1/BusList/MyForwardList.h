#pragma once
#pragma once
#include <iostream>
#include <string>
#define MY_DEBUG
using namespace std;

template <typename T>
class MyForwardList
{
public:
	MyForwardList() = default;
	void pushFront(const T& data);
	void print() const;
	void eraseFront();
	bool isEmpty() const;
	void clear();
	void insertAfter(const T& search, const T& insData);
	void eraseAfter(const T& searchData);
	void addTail(const T& data);
	void deleteFromTail();

	void deleteWithValue(const T& data);
	size_t changeAndFind(const T& data, const T& searchData);

	bool operator ==(const MyForwardList& other);
	MyForwardList(MyForwardList& other);
	MyForwardList& operator =(MyForwardList& other);

	void deleteByIndex(const size_t& index);
	void deleteByNumber(const size_t& number);

	~MyForwardList();
private:
	struct Node
	{
	public:
		Node(const T& data, Node* next = nullptr)
			: data(data), next(next)
		{}

		T data;
		Node* next;
	};

	Node* head = nullptr;
	Node* tail = nullptr;
	auto findNode(const T& data);
};

template<typename T>
inline void MyForwardList<T>::pushFront(const T& data)
{
	Node* tmp = new Node(data, head);

	if (isEmpty())
	{
		tail = tmp; // first
	}

	this->head = tmp;
}

template<typename T>
inline void MyForwardList<T>::print() const
{
	Node* tmp = head;

	cout << "List : ";
	while (tmp != nullptr)
	{
		cout << tmp->data << ", ";
		tmp = tmp->next;
	}
	cout << endl;
}

template<typename T>
inline void MyForwardList<T>::eraseFront()
{
	if (!isEmpty())
	{
		auto tmp = head;
		head = head->next;

		if (isEmpty())
		{
			tail = nullptr;
		}
#ifdef  MY_DEBUG
		cout << "Debug : Was deleted " << tmp->data << endl;
#endif

		delete tmp;
	}
}

template<typename T>
inline bool MyForwardList<T>::isEmpty() const
{
	return head == nullptr;
}

template<typename T>
inline void MyForwardList<T>::clear()
{
	while (!isEmpty())
	{
		eraseFront();
	}
}

template<typename T>
inline void MyForwardList<T>::insertAfter(const T& search, const T& insData)
{
	Node* find = findNode(search);

	if (find != nullptr)
	{
		Node* ins = new Node(insData, find->next);
		find->next = ins;

		if (find == tail)
		{
			tail = ins;
		}
	}
}

template<typename T>
inline void MyForwardList<T>::eraseAfter(const T& searchData)
{
	Node* find = findNode(searchData);

	if (find != nullptr)
	{
		auto tmp = find->next;
		find->next = find->next->next;

		if (tmp == tail)
		{
			tmp = head;
		}
		delete tmp;
	}
}

template<typename T>
inline void MyForwardList<T>::addTail(const T& data)
{
	Node* add = new Node(data);
	if (!isEmpty())
	{
		tail->next = add;
	}
	else {
		head = add;
	}
	tail = add;
}

template<typename T>
inline void MyForwardList<T>::deleteFromTail()
{
	if (!isEmpty())
	{
		Node* del = head;

		while (del->next != tail)
		{
			del = del->next;
		}

		delete tail;
		del->next = nullptr;
		tail = del;
		delete del;
	}
}

template<typename T>
inline void MyForwardList<T>::deleteByIndex(const size_t& index)
{
	if (!(isEmpty()))
	{
		Node* temp = head;
		size_t counter = 0;

		if (index == counter)
		{
			head = temp->next;
		}

		if (!(index == 0))
		{
			while (counter != index - 1)
			{
				temp = temp->next;
				++counter;
			}
		}

		if (temp->next != nullptr)
		{
			temp->next = temp->next->next;
		}
		else if (temp == head && temp->next == tail)
		{
			tail = nullptr;
			head = nullptr;
		}
		else {
			tail = nullptr;
		}

		temp = nullptr;
		delete temp;
	}
}

template<typename T>
inline void MyForwardList<T>::deleteWithValue(const T& data)
{
	if (!(isEmpty()))
	{
		Node* temp = head;

		while (temp != nullptr)
		{
			if (temp->next->data == data)
			{
				break;
			}

			temp = temp->next;
		}

		if (temp != nullptr)
		{
			if (temp->next != tail)
			{
				temp->next = temp->next->next;
			}
			else if (temp->next == tail)
			{
				tail = nullptr;
			}
			else if (temp == head && temp->next == tail)
			{
				tail = nullptr;
				head = nullptr;
			}

			temp = nullptr;
		}
	}
	else {
		cerr << "List is empty. (Can't delete any element)\n";
	}
}

template<typename T>
inline void MyForwardList<T>::deleteByNumber(const size_t& value)
{
	if (!(isEmpty()))
	{
		Node* temp = head;

		while (temp->next->data.getNumber() != value && temp != tail)
		{
			temp = temp->next;
		}

		if (temp == tail)
		{
			return;
		}

		temp->next = temp->next->next;
		temp = nullptr;
		delete temp;
	}
	else {
		cerr << "List is empty. (Can't delete any element)\n";
	}
}

template<typename T>
inline size_t MyForwardList<T>::changeAndFind(const T& data, const T& searchData)
{
	size_t counter = 0;

	if (isEmpty())
	{
		return counter;
	}

	Node* temp = head;

	while (temp != nullptr)
	{
		if (temp->data == searchData)
		{
			temp->data = data;
			++counter;
		}

		temp = temp->next;
	}

	return counter;
}

template<typename T>
inline bool MyForwardList<T>::operator==(const MyForwardList& other)
{
	if (!(isEmpty() || other.isEmpty()))
	{
		Node* temp_node = head;
		Node* other_temp_node = other.head;

		while (temp_node != nullptr)
		{
			if (temp_node->data != other_temp_node->data)
			{
				return false;
			}

			temp_node = temp_node->next;
			other_temp_node = other_temp_node->next;
		}

		return true;
	}
	else {
		return false;
	}
}

template<typename T>
inline MyForwardList<T>::MyForwardList(MyForwardList& other)
{
	Node* temp = other.head;

	while (temp != nullptr)
	{
		this->addTail(temp->data);
		temp = temp->next;
	}
}

template<typename T>
inline MyForwardList<T>& MyForwardList<T>::operator=(MyForwardList& other)
{
	if (this != &other)
	{
		Node* temp_node = other.head;
		clear();

		while (temp_node != nullptr)
		{
			this->addTail(temp_node->data);
			temp_node = temp_node->next;
		}
	}

	return *this;
}

template<typename T>
inline MyForwardList<T>::~MyForwardList()
{
	clear();
}

template<typename T>
inline auto MyForwardList<T>::findNode(const T& data)
{
	Node* tmp = head;

	while (tmp != nullptr && tmp->data != data)
	{
		tmp = tmp->next;
	}

	return tmp;
}
